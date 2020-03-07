#include <bits/stdc++.h>
using namespace std;
long long *A, *tree;
inline void build(int k, int left, int right){
    if(left == right){
        tree[k] = A[left];
        return;
    }
    int center = (left + right)/2;
    build(2*k,left, center);
    build(2*k+1,center+1,right);
    tree[k] = max(tree[k*2],tree[k*2 + 1]);
}
inline int query(int k, int left, int right, int l, int r){
    if(l > r)
        return INT_MIN;
    if(left == l && right == r)
        return tree[k];
    int center = (right + left)/2;
    return max(query(k*2,left,center,l,min(r,center)),
               query(k*2 + 1,center+1,right,max(l,center+1),r));
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,q;
    cin >> n;
    A = new long long[n];
    tree = new long long[4 * n];
    for(register int i = 0; i < n; i++)
        cin >> A[i];
    cin >> q;
    build(1,0,n-1);
    int l,r;
    for(int i = 0; i < q; ++i){
        cin >> l >> r;
        if(l > r)
            swap(l,r);
        cout << query(1,0,n-1,--l,--r) << endl;
    }
}