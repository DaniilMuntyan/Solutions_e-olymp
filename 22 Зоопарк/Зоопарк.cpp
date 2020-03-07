#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n == 2){
        cout << 0 << endl;
        return 0;
    }
    if(n == 3){
        cout << 2 << endl;
        return 0;
    }
    cout << (n-2)*(n-1) << endl;

}