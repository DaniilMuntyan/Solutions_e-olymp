#include <bits/stdc++.h>
using namespace std;
int *A, *tree;
int query(int k, int left, int right, int l, int r){
    if(l > r)
        return 0;
    if(l == left && r == right)
        return tree[k];
    int center = (left + right)/2;
    return query(2*k,left,center,l,min(r,center))+
            query(2*k + 1, center+1,right,max(l,center+1),r);
}
void build(int k, int left, int right){
    if(left == right){
        tree[k] = A[left];
        return;
    }
    int center = (left + right)/2;

    build(2*k,left,center);
    build(2*k+1,center+1,right);
    tree[k] = tree[2*k] + tree[2*k + 1];
}
void update(int k, int l, int r, int i, int value){
    if(r == l){
        tree[k] = value;
        return;
    }
    int center = (r + l)/2;
    if(i <= center)
        update(2*k,l,center,i,value);
    else
        update(2*k+1,center+1,r,i,value);
    tree[k] = tree[k*2] + tree[k*2 + 1];
}
int main() {
    int n,q,l,r;
    char t;
    cin >> n >> q;
    A = new int[n];
    tree = new int[4 * n];
    for(int i = 0; i < n; i++)
        cin >> A[i];
    build(1,0,n-1);
    while(q--){
        int i,d;
        cin >> t;
        if(t == '?'){
            cin >> l >> r;
            cout << query(1,0,n-1,--l,--r) << endl;
        }else{
            cin >> i >> d;
            i--;
            update(1,0,n-1,i,d);
        }
    }
}