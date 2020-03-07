#include <bits/stdc++.h>
using namespace std;
string newString(string s){
    string a;
    a = '+'+s;
    return a;
}
string fixedString(string s){
    string r = " ";
    r = "-";
    r+=s[1];
    if(s.length() > 1){
        for(int i = 2; i < s.length();i++)
        {
            if(s[i] == '0'){
                r+='+';
                r+=s[i];
            }else{
                r+='+';
                r+=s.substr(i, s.length()-i);
                break;
            }
        }
    }
    return r;
}
int main(){
    string s,number;
    bool check = true;
    cin >> s;
    int q = 0;
    vector <int> a;
    vector <string> d;
    if(s[0] != '+' && s[0] != '-')
        s = newString(s);
    else
        check = false;
    for(int i = 0; i < s.length();i++)
    {
        if(s[i] == '-' || s[i] == '+'){
            number+=s[i];
            q = i+1;
            while(s[q] != '-' && s[q] != '+' && q < s.length()){
                number+=s[q];
                q++;
            }
        }else{
            d.push_back(number);
            number = "";
        }
    }
    for(int i = 0; i < d.size();i++)
    {
        string z = d[i];
        if(z[0] == '-')
            z = fixedString(z);
        d[i] = z;
    }
    for(int i = 0; i < d.size();i++){
        string z = d[i];
        if(i == 0 && z[0] == '+' && check)
        {
            z.erase(0,1);
            d[i] = z;
        }
        cout << d[i];
    }
    cout << endl;
}