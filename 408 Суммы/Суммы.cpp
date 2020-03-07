#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    bool check = false;
    cin >> t;
    for(int u = 0; u < t; u++){
        long long n;
        cin >> n;
        if(n == 1 || n == 2)
        {
            cout << "IMPOSSIBLE" << endl;
            continue;
        }
        if(n%2== 1)
        {
            cout << n << " = " << n/2 << " + " << n/2 + 1 << endl;
            continue;
        }
        long long i,d,a,c=0,to;
        double a1;
        if(n >= 11)
            to = 2*n;
        else
            to = 6*n;
        for(i = 3; i*i <= to;i++){
            if(2*n%i==0){
                d = i;
                a = (2*n - d*d + d)/(2*d);
                a1 = (double)(2*n - d*d + d)/(2*d);
                if(a1 != a)
                {
                  //  cout << "IMPOSSIBLE" << endl;
                  check = false;
                    continue;
                }else
                {
                    if(a == 0)
                    {
                        a++;
                        d--;
                    }
                    cout << n << " = ";
                    for(i = a;c<d;i++,c++)
                    {
                    if(c != d-1)
                        cout << i << " + ";
                    else
                        cout << i << endl;
                    }
                    check = true;
                    break;
                }
            }
        }
        if(!check)
            cout << "IMPOSSIBLE" << endl;
        else
            check = false;
    }
}