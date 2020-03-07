#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a0;
vector <int> a1;
pair<int,int> ans;
bool check(int a, int b){
    if(a == 0 && b == 1)
        return true;
    if(a == 1 && b == 0)
        return true;
    return false;
}
main()
{
    int n;
    cin >> n;
    int a;
    int A[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a;
            A[i][j] = a;
        }
    }
    int m = LLONG_MAX;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a)
            a1.push_back(i);
        else
            a0.push_back(i);
    }
     for(auto &a : a0) {
        for(auto &b : a1) {
            if(m > A[a][b]) {
                m = A[a][b];
                ans = {a, b};
            }
        }
    }
    cout << ans.first+1 << " " << ans.second+1 << endl;
}