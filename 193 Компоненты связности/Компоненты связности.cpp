#include <iostream>
using namespace std;
int n;
int a[101][101];
bool used[101] = {false};
void DFS(int v)
{
    used[v] = true;
    int i;
    for(i = 1; i <= n; i++)
    {
        if(!used[i] && a[v][i] != 0)
        {
            DFS(i);
        }
    }
}
int main()
{
    int k = 0;
    cin >> n;
    int i, j;
    for(i= 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            cin >> a[i][j];
    for(i = 1; i <= n; i++)
    {
        if(!used[i])
        {
            k++;
            DFS(i);
        }
    }
    cout << k << endl;



}