#include <bits/stdc++.h>
using namespace std;
#define int long long
main(){
    int step, d, l, w;
    cin >> step >> d >> l >> w;
    int x = d;
    int c = 0;
    while(x < l+w+d){
        x += step;
        if(x > l && x < l+w+d){
            cout << 0 << endl;
            return 0;
        }
        c++;
    }
    cout << c-1 << endl;

}