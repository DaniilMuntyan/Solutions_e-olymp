#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <bool> d(n,false);
    int i,a;
    for(i = 0; i < n-1;i++){
        cin >> a;
        d[a-1] = true;
    }
    for(i = 0; i < n; i++){
        if(d[i] == false)
    {
        cout << i+1 << endl;
        return 0;
    }
    }
}