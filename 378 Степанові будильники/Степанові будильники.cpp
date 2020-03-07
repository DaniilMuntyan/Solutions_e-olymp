#include <iostream>
using namespace std;
long long NOD(long long n1, long long n2)
{
    if(n1!=0 && n2!=0)
    {
        if(n1 > n2)
            return NOD(n1%n2,n2);
        else
            return NOD(n1,n2%n1);
    }else
    return n1 + n2;
}
long long NOK(long long n1, long long n2)
{
    return n1*n2 / NOD(n1, n2);
}
int main()
{
    long long a, b;
    cin >> a >> b;
    long long nok = NOK(a,b);
    cout << nok << endl;
}