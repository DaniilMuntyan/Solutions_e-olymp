#include <string>
#include <iostream>
using namespace std;
string s;
string g = "";
int j,c1=0,c2=0;
int main()
{
    ios_base::sync_with_stdio(0);
    while(cin >> s)
    {
        c1 = 0;
        c2 = 0;
        for(j=0;j<s.length();j++)
            if(s[j]==(char)39)
                c1++;
            else
                break;
        for(j=s.length()-1;j>=0;j--)
        if(s[j] == (char)39)
            c2++;
        else
            break;
            if(c1==0&&c2==0)
            {
                g+=s;
                continue;
            }
        for(j=c1*2;j<(s.length()-c2*2);j++)
        g+=s[j];

    }cout << g << endl;
}