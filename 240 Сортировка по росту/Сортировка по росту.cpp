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
    int n, a, b;
    while(cin >> n){
        vector <int> mas(n);
        for(int i = 0; i < n; i++) cin >> mas[i];
        cin >> a >> b;
        int c = 0;
        for(int i = 0; i < n; i++)
            if(mas[i] >= a && mas[i] <= b)
                c++;
        cout << c << endl;
    }
}