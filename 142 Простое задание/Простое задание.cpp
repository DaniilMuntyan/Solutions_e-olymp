#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long sum=0;
    while(cin >> n)
    {
        if(n==0)
            return 0;
        if(n <= 0)
        {
            for(int i = 1; i >= n;i--)
                sum+=i;
            cout << sum << endl;
        }else{
        for(int i = 1;i<=n;i++)
        {
            sum+=i;
        }
        cout << sum << endl;
        }
        sum = 0;
    }
}