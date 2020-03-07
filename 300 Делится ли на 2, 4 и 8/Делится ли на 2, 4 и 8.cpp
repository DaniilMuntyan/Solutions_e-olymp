#include <bits/stdc++.h>
using namespace std;
#define int long long
int toInt(string s){
    int ans = 0, n = s.length();
    for(int i = 0; i < n; i++)
        ans += pow(10, n-i-1)*(s[i]-'0');

    return ans;
}
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    if((s[s.length()-1]-'0') % 2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    if(s.length() > 1){
        string s1 = s.substr(s.length()-2, 2);
        int a = (s1[0]-'0')*10 + (s1[1]-'0');
        if(a%4 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }else{
        int a = toInt(s);
        if(a%4 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;

        if(a%8 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
        return 0;
    }
    if(s.length() == 2){
        if(toInt(s)%8 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
        return 0;
    }
    if(s.length() >= 3){
        string s2 = s.substr(s.length()-3, 3);
        int a = toInt(s2);
        if(a%8==0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }else{
        int a = toInt(s);
        if(a % 8) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}