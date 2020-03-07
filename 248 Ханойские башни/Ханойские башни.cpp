#include <iostream>
using namespace std;
int n;
void proc(int n, int i , int j)
{
    if(n > 0)
    {
        proc(n-1,i,6-i-j);
        cout << i << " " << j << endl;
        proc(n-1,6-i-j,j);
    }
}
int main()
{
    cin >> n;
    proc(n,1,2);
}