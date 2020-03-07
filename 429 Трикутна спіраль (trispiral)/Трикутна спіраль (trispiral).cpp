#include <bits/stdc++.h>
using namespace std;
#define int long long
main(){
    int x, y;
    bool f = false;
    cin >> x >> y;
    if(x == 0 && y == 0){
        cout << 0 << endl;
        f = true;
    }
    if(x == 1 && y > 0 && y % 2 == 0){
        cout << ((y/2)-1)*3 + 1 << endl;
        f = true;
    }
    if(x > 0 && y < 0 && (x+1)%2 == 0 && abs(y) % 2 == 0 &&  x == abs(y)+1){
        cout << abs(y)/2 * 3 - 1  << endl;
        f = true;
    }
    if(x < 0 && y < 0 && x == y && abs(x)%2==0){
        cout << abs(x)/2 * 3 << endl;
        f = true;
    }
    if(!f)
    cout << -1 << endl;
}