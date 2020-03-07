#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,t,sum=0,c=0;
    cin >> n >> t;
    vector <int> d(n);
    int i;
    for(i=0;i<n;i++){
        cin >> d[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=d[i];
        if(sum > t)
            break;
        c++;
    }
    cout << c << endl;
}