#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    cin >> t >> n;
    vector <int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(),a.end());
    if(t == 1){
        if(n-((n-a[2]) + (n-a[1]) + (n-a[0])) < 0)
        cout << 0 << endl;
        else
        cout << n-((n-a[2]) + (n-a[1]) + (n-a[0])) << endl;

    }
    else
        cout << a[0] << endl;
}