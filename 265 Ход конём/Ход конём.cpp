#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,i,m,j;
    cin>>n>>m;
    int A[n+2][m+2];
    for(i=0;i<n+2;i++)for(j=0;j<m+2;j++)A[i][j]=0;
    A[2][2]=1;
    for(i=2;i<n+2;i++)
    {
        for(j=2;j<m+2;j++)
        {
            A[i][j]+=A[i-1][j-2]+A[i-2][j-1];
        }
    }
    cout<<A[n+1][m+1]<<endl;
}