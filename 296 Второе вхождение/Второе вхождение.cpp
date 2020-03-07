#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i;
    bool bl =false;
    int k =0;
    for(i=0;i<s.length();i++)
    {
        if(s[i] == 'f')
        {
            k++;
            if(k==2){
                cout << i << endl;
                exit(0);
            }

        }
    }
    if(k==0)
    {
        cout << -2 << endl;
        exit(0);
    }
    if(k==1)
    {
        cout << -1 << endl;
        exit(0);
    }
}