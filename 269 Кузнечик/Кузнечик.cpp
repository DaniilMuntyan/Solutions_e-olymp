#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[31] = {0};
    int i,sum=1;
    a[0] = 0;
    a[1] = 1;
    for(i = 2; i <= k; i++){
        a[i] = sum;
        sum+=sum;
    }
    for(;i<=n;i++)
    {
        a[i] = sum;
        sum = sum - a[i-k] + a[i];
    }
    cout << a[n] << endl;
}