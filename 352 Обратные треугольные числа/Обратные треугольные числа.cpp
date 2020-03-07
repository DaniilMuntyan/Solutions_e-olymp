#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n1;
    long n,s,c=1;
    while(cin >> s){
        if(s == -1)
            return 0;
        n1 = (-1 + sqrt(1+8*s))/2;
        if(n1 == (int)n1)
            cout << "Case " << c << ": " << n1 << endl;
        else{
            cout << "Case " << c << ": bad" << endl;
        }
        c++;
    }

}