#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int i;
    a[0] = 2;
    a[1] = 4;
    for(i = 2; i < n; i++)
        a[i] = a[i-1] + a[i-2];
    cout << a[n-1] << endl;
}