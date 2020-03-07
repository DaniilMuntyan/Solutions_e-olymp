#include <bits/stdc++.h>
using namespace std;
int main()
{
    double r;
    cin >> r;
    double i,j;
    int c = 0;
    for(i = -1*r; i <= r; i+=1.0){
        for(j = -1*r; j <= r; j+=1.0){
            if(i*i + j*j <= r*r)
                c++;
        }
    }
    cout << c << endl;
}