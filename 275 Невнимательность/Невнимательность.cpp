#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string t;
    char a[501];
    int g;
    int i = 0;
    while(cin >> s){
        for(i = 0; i < s.length();i++)
    {

        if(islower(s[i]))
        {
           // cout << s[i] << "(" << i << ") " << " = " << int(s[i]) << "    =    ";
            g = s[i];
            g = towupper(g);
            s[i] = g;
            //cout << s[i] << endl;
            continue;
        }
        if(isupper(s[i]))
        {
            //cout << s[i]  << "(" << i << ") "<< " = " << int(s[i]) << "    =    ";
            g = s[i];
            g = tolower(g);
            s[i] = g;
           // cout << s[i] << endl;
        }
    }
    cout << s << " ";
    }
    cout << endl;


}