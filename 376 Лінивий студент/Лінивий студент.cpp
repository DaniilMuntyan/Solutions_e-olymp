#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "qeopadgb";
    string str;
    int k = 0;
    while(cin >> str)
    {
        for(int  t = 0; t <= str.length();t++)
        {
            for(int i = 0; i < s.length();i++)
                if(str[t] == s[i])
            {
                k++;
                break;
                
            }
        }
    }
    cout << k << endl;
}