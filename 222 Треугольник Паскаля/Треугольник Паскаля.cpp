#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1][n+1];
    int i;
    int k = 0;
    a[1][1] = 1;
    for(i = 2; i <= n;i++)
    {
        for(int j = 1;j <= i;j++)
        {
            if(j == 1 || i == j)
                a[i][j] = 1;
            else
            {
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
        }
    }
    for(i = 1; i <=n;i++)
    {
        for(int j = 1; j <= i;j++){
            k++;
            if(k==n)
            {
                cout << a[i][j] << endl;
                return 0;
            }

        }
    }
}