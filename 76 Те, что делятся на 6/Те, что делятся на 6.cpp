#include <bits/stdc++.h>
using namespace std;
#define int long long
main() {
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int sum = 0, c = 0, a;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a % 6 == 0 && a > 0){
            sum += a;
            c++;
        }
    }
    cout << c << " " <<  sum << endl;

}