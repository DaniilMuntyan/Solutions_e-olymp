#include <bits/stdc++.h>
using namespace std;
/*long long res(long long a){
    int r = 1;
    while(a > 0)
    {
        r*=a%10;
        a/=10;
    }
    return r;
}*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    char t;
    cin >> a >> b >> t;
    if(t == 'W'){
            if(b+1 <= a)
        cout << b+1 << endl;
    else
        cout << a << endl;
    }
    else{
            if(b+2 <= a)
        cout << b+2 << endl;
    else
        cout << a << endl;
    }
}