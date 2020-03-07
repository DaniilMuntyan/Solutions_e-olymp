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
    int k;
    cin >> n;
    vector <int> a(n), b(n-1);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int m = -1;
    for(int i = 0; i < n-1;i++){
        b[i] = a[i] + a[i+1];
        if(b[i] > m){
            m = b[i];
            k = i;
        }
    }
    //cout << k << endl;
    int m1 = a[k] + a[k+1];
   // cout << m1 << endl;
    a.erase(a.begin()+k);
    a.erase(a.begin()+k);
    m = 0;
   /* cout << " k = " << k << " a[k] = " << a[k] << endl;
    for(int i = 0; i < a.size();i++)
        cout << a[i] << " ";
    cout << endl;*/
    for(int i = 0; i < a.size()-1;i++){
        if(i == k-1 && k-1 != 0) continue;
        b[i] = a[i] + a[i+1];
        if(b[i] > m){
            m = b[i];
        }
    }
    cout << /*m1 << endl << m << endl <<*/ m1+m << endl;
}