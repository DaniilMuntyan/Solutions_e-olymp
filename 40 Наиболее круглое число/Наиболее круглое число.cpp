#include <bits/stdc++.h>
using namespace std;
#define int long long
int c(int a){
    int ans = 0;
    while(a > 0){
        if(a%10 == 0)
            ans++;
        else
            break;
        a/=10;
    }
    return ans;
}
bool f(pair<int,int> a, pair<int,int> b){
    if(a.second > b.second) return true;
    if(a.second == b.second) return a.first < b.first;
    return false;
}
main()
{
    int n;
    cin >> n;
    vector < pair<int,int> > a(n);
    int b;
    for(int i = 0; i < n; i++){
        cin >> b;
        a[i] = {b, c(b)};
    }
    sort(a.begin(),a.end(),f);
    cout << a[0].first << endl;

}