#include <iostream>
#include <string>
using namespace std;
char a[11][11];
int b[11][11] = {1};
  int n;
  int c = 0;
void f(int x, int y)
{
    if(a[x][y] == '.')
    {
    c++;
   a[x][y] = '*';
    f(x+1,y);
   f(x-1,y);
   f(x,y+1);
   f(x,y-1);
    }

}
int main()
{

    cin >> n;
    int i, j;
    for(i = 1 ; i<=n;i++)
        for(j = 1; j <= n; j++)
        {
           cin >> a[i][j];

        }
    int x,y;
    cin >> x >> y;
    f(x,y);
    cout <<  c << endl;
}