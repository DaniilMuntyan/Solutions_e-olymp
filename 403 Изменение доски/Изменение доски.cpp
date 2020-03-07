#include <bits/stdc++.h>
#include <string>
using namespace std;
string iTostring(int a){
    string s = "";
    while(a > 0)
    {
        s += ((a%10)+'0');
        a/=10;
    }
    string ans="";
    for(int i = s.length()-1;i>=0;i--)
        ans+=s[i];
    return ans;
}
int main(){
    int n,m, c=0;
    string s = "";
    cin >> n >> m;
    for(int i = 2; i <= m; i+=2){
        string w = iTostring(i);
        string f = iTostring(n);
        s += "1 " + w + " " + f + " " + w + "\n";
        c++;
    }
    for(int i = 2; i<=n;i+=2){
        string w = iTostring(i);
        string f = iTostring(m);
        s += "" + w + " 1 " + w + " " + f  + "\n";
        c++;
    }
    cout << c << endl << s;
}