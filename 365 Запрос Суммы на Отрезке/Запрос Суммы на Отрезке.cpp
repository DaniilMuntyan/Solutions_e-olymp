#include <bits/stdc++.h>
using namespace std;
#define int long long
int *A, *tree;
int query(int k, int left, int right, int l, int r){
    if(l > r) return 0;
    if(l == left && r == right)
        return tree[k];
    int center = (left+right)/2;
    return query(k*2, left, center, l, min(r, center)) +
    query(k*2+1, center+1, right, max(l, center+1), r);
}
void build(int k, int left, int right){
    if(left == right){
        tree[k] = A[left];
        return;
    }

    int center = (left+right)/2;
    build(k*2, left, center);
    build(k*2+1, center+1, right);
    tree[k] = tree[k*2] + tree[2*k+1];
}
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        A = new int[n];
        for(int i = 0; i < n; i++) cin >> A[i];
        tree = new int[n*4];
        build(1, 0, n-1);
        while(q--){
            int l,r;
            cin >> l >> r;
            cout << query(1, 0, n-1, l, r) << endl;;
        }
        cout << endl;
    }
}