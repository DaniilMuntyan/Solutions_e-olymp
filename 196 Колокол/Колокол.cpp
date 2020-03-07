#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin >> n;
    vector <int> d(n);
    vector <int> a(n);
     int i;
     for(i=0;i<n;i++)
        cin >> d[i];
     sort(d.begin(),d.end());
     for(i=0;i<n;i+=2)
     {
         cout << d[i] << " ";
     }
     if((n-1)%2==1)
     for(i=n-1;i>0;i-=2)
        cout << d[i] << " ";
        else
            for(i=n-2;i>0;i-=2)
            cout << d[i] << " ";
     cout << endl;
}