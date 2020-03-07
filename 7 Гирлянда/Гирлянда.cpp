#include<bits/stdc++.h>
#define qq cout<<"!!"<<endl;
#define nl cout<<endl
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long n, ans = 1;
    cin >> n;
    while(n > 0)
    {
        ans *= 2;
        n = (n & (n - 1));
    }
    ans /= 2;
    cout << ans << endl;
}