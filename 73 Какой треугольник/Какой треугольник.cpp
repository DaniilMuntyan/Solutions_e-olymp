#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
    if(a[0] == a[1] && a[1] == a[2]){
        cout << 1 << endl;
        return 0;
    }
    if(a[0] == a[1] || a[1] == a[2]){
        cout << 2 << endl;
        return 0;
    }
    cout << 3 << endl;
}