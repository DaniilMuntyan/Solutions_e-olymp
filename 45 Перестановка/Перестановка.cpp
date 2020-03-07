#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int t;
    cin >> t;
    vector <char> c1(51), c2(51);
    while(t--){
        cin >> s1 >> s2;
        if(s1.length() != s2.length())
        {
            cout << "No" << endl;
            continue;
        }
        for(int i = 0; i < s1.length();i++){
            if(isupper(s1[i]))
                s1[i] = tolower(s1[i]);
            c1[i] = s1[i];
        }
        for(int i = 0; i < s2.length();i++){
            if(isupper(s2[i]))
                s2[i] = tolower(s2[i]);
            c2[i] = s2[i];
        }
        sort(c1.begin(),c1.end());
        sort(c2.begin(),c2.end());
        for(int i = 0; i < c1.size();i++)
            if(c1[i] != c2[i])
        {
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
        c1.clear();
        c2.clear();

    }
}