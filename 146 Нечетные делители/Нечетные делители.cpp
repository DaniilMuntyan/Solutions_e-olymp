#include <iostream>
using namespace std;
long long f(long long n)
{
    if(n==1)
        return 1;

    if(n%2 == 1)
        return ((n+1)*(n+1))/4 + f(n/2);
    else
        return (n*n)/4 + f(n/2);
}
int main()
{
    long long n;
    while(cin >> n){
        cout << f(n) << endl;
    }
}