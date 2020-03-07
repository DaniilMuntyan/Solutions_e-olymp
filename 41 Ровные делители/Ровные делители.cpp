#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i,c=0;
    cin >> n;
    for(i=1;i<n;i++)
    {
        if(double(n%i)==double(n/i)){

            c++;
        }
    }
    cout << c << endl;
}