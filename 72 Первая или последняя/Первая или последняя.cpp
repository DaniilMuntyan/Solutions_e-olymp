#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    if((s[0]-'0') == (s[2]-'0'))
        cout << "=" << endl;
    else
    cout << max((s[0]-'0'),(s[2]-'0')) << endl;
}