#include <bits/stdc++.h>
using namespace std;
int *A, *tree, *tree1;
void build(int k, int left, int right){
    if(left == right)
    {
        tree[k] = A[left];
        return;
    }
    int center = (left + right)/2;
    build(2*k,left,center);
    build(2*k+1,center+1,right);
    tree[k] = tree[k*2] & tree[k*2+1];
}
void build1(int k, int left, int right){
    if(left == right){
        tree1[k] = A[left];
        return;
    }
    int center = (left+right)/2;
    build1(2*k,left,center);
    build1(2*k+1,center+1,right);
    tree1[k] = min(tree1[k*2],tree1[2*k+1]);
}
int query(int k, int left, int right, int l, int r){
    if(l > r)
        return INT_MAX;
    if(l == left && r == right)
        return tree[k];
    int center = (right + left)/2;

    return query(2*k,left,center,l,min(r,center))&
    query(2*k+1,center+1,right,max(l,center+1),r);
}
int query1(int k, int left, int right, int l, int r){
    if(l > r)
        return INT_MAX;
    if(l == left && r == right)
        return tree1[k];
    int center = (right + left)/2;
    return min(query1(2*k,left,center,l,min(r,center)),
                query1(2*k+1,center+1,right,max(l,center+1),r));
}
int main() {
    int n,t;
    string s;
    cin >> n;
    A = new int[n];
    tree = new int[4 * n];
    tree1 = new int[4 * n];
    for(int i = 0; i < n; i++)
        cin >> A[i];
    build(1,0,n-1);
    build1(1,0,n-1);
    cin >> t;
    while(t--){
        cin >> s;
        if(s == "AND"){
            int l,r;
            cin >> l >> r;
            cout << query(1,0,n-1,--l,--r) << endl;
        }else{
            int l,r;
            cin >> l >> r;
            cout << query1(1,0,n-1,--l,--r) << endl;
        }
    }
}