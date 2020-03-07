#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int a = (s[s.length()-1]-'0');
    if(s[s.length()-2] == '1'){

        cout << s << " bochek" << endl;
        return 0;
    }
    if(a == 0 || a == 5 || a == 6 || a == 7 || a == 8 || a == 9){
        cout << s << " bochek" << endl;
        return 0;
    }
    if(a == 1){
        cout << s << " bochka" << endl;
        return 0;
    }

    cout << s << " bochki" << endl;
}