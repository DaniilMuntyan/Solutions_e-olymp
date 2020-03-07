#include <iostream>
using namespace std;
int f;
int m, n;
int funct(int m, int n)
{
    if(m == 0)
        return 1;
    if(m == n)
        return 1;
        else
            if(m > 0 && n > m)
                return funct(m-1,n-1) + funct(m,n-1);

}
int main()
{
    cin >> n >> m;
    f = funct(m,n);
    cout << f << endl;
}