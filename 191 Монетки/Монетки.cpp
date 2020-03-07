#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,i,s1=0,s2=0;
    cin >> n;
    vector <int> d(n);
    for(i=0;i<n;i++){
        cin >> d[i];
        if(d[i]==1)
            s1++;
        else
            s2++;
    }
    cout << min(s1,s2) << endl;
}