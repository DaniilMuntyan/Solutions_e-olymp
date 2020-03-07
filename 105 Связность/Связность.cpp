#include <iostream>
using namespace std;
int n,m;
int r[100][100]{0};
int k;
int a[101][101];
bool used[101]{false};
void proc(int v)
{
    int i = 1;
    used[v] = true;
    for(i = 1; i <= n; i++)
    {
        if(used[i]!=true && a[v][i] != 0)
        {
            k++;
            proc(i);
        }
    }
}
int main()
{

    cin >> n >> m;

    int i = 0,j = 0;
    for(i = 1; i <= m; i++)
    {
        for(j = 1; j <= 2; j++)
        {
            cin >> r[j][i];
        }
        a[r[1][i]][r[2][i]] = 1;
        a[r[2][i]][r[1][i]] = 1;
    }
    for(i = 1; i <= n; i++)
    {
        if(used[i]!=true)
            proc(i);
    }
    if(k == n-1)
        cout << "YES";
    else
        cout << "NO";
}