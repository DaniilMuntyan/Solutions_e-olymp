#include <bits/stdc++.h>
using namespace std;
#define int long long
int getNum(int n){
    int i = 0;
    i = 2;
    int c = 2;
    if(n == 1)
        c--;
    while(i*i <= n)
    {
        if(n % i == 0)
        {
            if(n/i != i)
                c++;
            c++;
        }
        i++;
    }
    return c;
}
main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int n;
    int k = 0;
    int x = 1;
    cin >> n;
    while(getNum(x) != n){
        x++;
    }
    cout << x << endl;

}