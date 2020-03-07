#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=0;
    char t;
    vector <int> k;
    vector <bool> d(100,false);
    while(cin >> t){
        if(isdigit(t)){
        int u = t-'0';
        d[u] = true;
        }
    }
    for(int i = 0; i <= 9; i++)
    if(!d[i]){
        c++;
        k.push_back(i);
    }
    cout << c << endl;
    for(int i = 0; i < c;i++)
        cout << k[i] << " ";
    cout << endl;
}