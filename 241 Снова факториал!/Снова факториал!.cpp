#include <bits/stdc++.h>
using namespace std;
long long f(long long a)
{
    long long ans=1,i;
    for(i=1;i<=a;i++)
    {
        ans*=i;
    }
    return ans;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string n;
    long long i,sum=0;
    while(cin >> n){
        if(n=="0")
        return 0;
        for(i=0;i<n.length();i++)
        {
         sum+=((f(n.length()-i))*(n[i]-'0'));
        }
        cout << sum << endl;
        sum = 0;
    }
}