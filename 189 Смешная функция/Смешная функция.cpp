#include <bits/stdc++.h>
using namespace std;
unsigned long long d[51][51][51];
unsigned long long w(unsigned long long a, unsigned long long b,unsigned  long long c){

    if(d[a][b][c] != -1)
        return d[a][b][c];

    if(a <= 0 || b <= 0 || c <= 0){
        d[a][b][c] = 1;
        return 1;
    }
    if(a > 20 || b > 20 || c > 20){
        return w(20,20,20);
    }
    if(a < b && b < c)
    {
//        if(d[a][b][c-1] == -1)
//            d[a][b][c-1] = w(a,b,c-1);
//        if(d[a][b-1][c-1] == -1)
//            d[a][b-1][c-1] = w(a,b-1,c-1);
//        if(d[a][b-1][c] == -1)
//            d[a][b-1][c] = w(a,b-1,c);
        return d[a][b][c] = w(a,b,c-1) + w(a,b-1,c-1) - w(a,b-1,c);
    }
   /* if(d[a-1][b][c] == -1)
        d[a-1][b][c] = w(a - 1, b, c);
    if(d[a-1][b-1][c] == -1)
        d[a-1][b-1][c] = w(a - 1, b - 1, c);
    if(d[a-1][b][c-1] == -1)
        d[a-1][b][c-1] = w(a - 1, b, c - 1);
    if(d[a-1][b-1][c-1] == -1)
        d[a-1][b-1][c-1] = w(a - 1, b - 1, c - 1);*/
    return d[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);

}
int main()
{
    string s = "";
    long long a, b, c;
        for(long long i = 0; i < 51; i++)
            for(long long j = 0; j < 51; j++)
                for(long long k = 0; k < 51;k++)
                    d[i][j][k] = -1;
    while(cin >> a >> b >> c)
    {
        if(a == -1 && b == -1 && c == -1)
            return 0;
        if(a <= 0 || b <= 0 || c <= 0)
        {
            cout << "w(" << a << ", " << b << ", " << c << ") = " << 1 << endl;
            continue;
        }
        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a,b,c) << endl;
    }
}