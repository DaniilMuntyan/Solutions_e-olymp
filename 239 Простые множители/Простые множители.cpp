#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    int k = 0;
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        int i = 0;
        i = 2;
        while(i*i <= n)
        {
            if(n % i == 0)
            {
                cout << i;
                n = n / i;
                if(n > 1)
                    cout << " * ";
            }else i++;

        }
        if(n > 1)
            cout << n << endl;
    }
}