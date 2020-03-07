#include <iostream>
using namespace std;
int n;
bool t = false;
int color[21]{-1};
int a[51][51];
void proc(int v)
{
    int i;
    color[v] = 1;
    for(i = 1; i <= n; i++)
    {

        if(a[v][i] != 0)
        {

                if(color[i]==1)
                {
                    t=true;
                    break;
                }else
                {
                proc(i);
                }

        }
    }
    color[v] = 2;

}
int main()
{
    cin >> n;
    int i, j;
    for(i = 1; i <= n;i++)
    {
        for(j = 1; j <= n; j++)
        {
            cin >> a[i][j];
           /* if(a[i][j] == 1)
                a[j][i] = 1;*/
        }

    }
    if(n == 2 && n == 1)
        cout << "0";
    else
    {
    for(i = 1; i <= n; i++)
    if(!t)
    {
        proc(i);
    }
    if(t)
        cout << "1" << endl;
    else
        cout << "0" << endl;
    }
}