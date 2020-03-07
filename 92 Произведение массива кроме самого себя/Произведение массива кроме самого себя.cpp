#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    int i;
    int c = 0;
    bool t = false;
    long long a = 1;
    vector <int> d(n);
    for(i=0;i<n;i++){
        cin >> d[i];
        if(d[i]==0)
            t = true;
        else{
        if(i==0){
        if(d[i]==0)
        a=1;
        else
        a = d[i];
        }
        else{
        a*=d[i];

        }

        }
    }
   int check = 0;
    for(i=0;i<n;i++)
    if(d[i]==0){
            check++;
    }
    if(check > 1)
    {
        for(i=0;i<n;i++)
        {
            cout << 0 << " ";
        }
    cout << endl;
    return 0;
    }
    for(i=0;i<n;i++){
            if(t && d[i]!=0)
            cout << 0 << " ";
    else
    if(d[i]==0)
        cout << a << " ";
    else
        cout << a/d[i] << " ";

    }
    cout << endl;
}