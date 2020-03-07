#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    cin >> s;
    long long k =0;
    vector <bool> used(10);
    long long i;
    for(i=0;i<s.length();i++)
    {
        if(!used[(s[i]-'0')])
        {
            k++;
            used[(s[i]-'0')] = true;
        }
    }
    cout << k<< endl;
   /* int n,k,sum=0;
    int j,mi=0, mD,k;
    int av;
    cin >> n >> k;
    int i;
    vector <int> d(n);
    vector <bool> used(n,false);
    for(i=0;i<n;i++){
        cin >> d[i];
        sum+=d[i];
    }
    av = sum/n;
     mi = abs(av-d[0]);
        mD = d[0];
    int ma = mi;
    for(i=0;i<k;i++)
    {
          for(j=0;j<n;j++)
        {
            mi = abs(av-d[0]);
            mD = d[0];
            for(k=0;k<n;k++)
            {
                if(abs(av-d[k]) < mi)
                {
                    mi = abs(av-d[k]);
                    mD = d[k];
                }
            }
        }
        cout << endl;

    }
    cout << ma <<" " << mi<< endl;*/
}