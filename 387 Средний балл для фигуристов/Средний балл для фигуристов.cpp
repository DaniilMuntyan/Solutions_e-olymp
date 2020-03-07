#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector <int> d(n);
    int i,j,a,b,mi,c=0;
    double sum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            cin >> d[j];
        sort(d.begin(),d.end());
        for(j=0;j<n;j++)
        {
            if(d[j] != d[0] && d[j] != d[n-1])
            {
                c++;
                sum+=d[j];
            }
        }
        cout <<setprecision(2) << fixed << (double)(sum)/c << " ";
        c=0;
        sum = 0;


    }
    return 0;
}