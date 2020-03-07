#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <long long> a(3);
    cin >> a[0] >> a[1] >> a[2];
    bool check1 = false, check2 = false;
    for(int i = 0; i < 3; i++){
        if(a[i] % 2 == 0 && !check1)
            check1 = true;
        if(a[i] % 2 == 1 && !check2)
            check2 = true;
    }
    if(check1 && check2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}