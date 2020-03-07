#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < s.length();i++)
    {
        if(i%2==0)
            sum1 += (s[i] - '0');
        else
            sum2 += (s[i] - '0');
    }
    if((sum1-sum2)%11==0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}