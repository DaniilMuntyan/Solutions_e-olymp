#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a = 0;
    cin >> n;
    vector <int> d(n);
    int i,j,c=0;
    int ans = -1;
    for(i=0;i<n;i++){
        cin >> d[i];
    }
    sort(d.begin(),d.end());
    for(i=0;i<n;i++)
    {
        j = i;
        while(d[i] == d[j]){
            c++;
            j++;
        }
        if(2*c > int(n)){
           ans = d[i];
           a++;
        }
        if(a > 1)
        {
            cout << -1 << endl;
            return 0;
        }
        i+=c-1;
        c = 0;
    }
    cout << ans << endl;

}