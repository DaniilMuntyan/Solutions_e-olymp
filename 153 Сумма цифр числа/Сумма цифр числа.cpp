#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    string s;
    cin >> s;
    bool b = false;
    if(s[0] == '-')
        b = true;
    long long sum = 0;
    if(b)
    for(int i = 1; i < s.length(); i++)
        sum += (s[i]-'0');
    else
    for(int i = 0; i < s.length(); i++)
        sum += (s[i]-'0');
    cout << sum << endl;
}