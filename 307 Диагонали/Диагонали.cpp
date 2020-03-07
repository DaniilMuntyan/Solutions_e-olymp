#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,i,j;
    long sum1=0,sum2=0;
    cin >> n;
    vector<int> d(n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        cin >> d[i];
        if(i==j)
            sum1+=d[i];
        if(i==n-j-1)
            sum2+=d[i];
        }
    }
    cout << sum1 << " " << sum2 << endl;
}