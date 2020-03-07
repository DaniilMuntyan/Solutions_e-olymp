#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int i,j;
    int maxLenght = 0;
    int maxCount = 0;
    int a[n+1][n+1];
    for(i=0;i<n;i++)
    {
        a[0][i] = 0;
        a[i][0] = 0;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 1)
            {
                a[i][j] = min(a[i-1][j],min(a[i][j-1],a[i-1][j-1])) + 1;
                if(a[i][j] == maxLenght)
                    maxCount++;
                if(a[i][j] > maxLenght){
                    maxLenght = a[i][j];
                    maxCount = 1;
                }
            }
        }
    }
    cout << maxCount*maxLenght << endl;
}