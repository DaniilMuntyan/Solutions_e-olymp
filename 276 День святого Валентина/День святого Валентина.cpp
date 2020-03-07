#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long n,k,sum=0;
      long j,mi=0,mD,t, mNumber=-1;
      long  av;
    cin >> n >> k;
      long  i;
    vector <  long > d(n);
    for(i=0;i<n;i++){
        cin >> d[i];
    }
    sort(d.begin(),d.end());
    vector <  long > h;
    i=0;
    while(i+k-1 < n)
    {
        h.push_back(abs(d[i]-d[i+k-1]));
        i++;
    }
    mi = h[0];

    for(i=0;i<h.size();i++)
        if(h[i] < mi)
        mi = h[i];
    cout << mi << endl;

}
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin >> n >> m;
    vector <int> c[n];
    int i,j,a;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            cin >> a;
            c[i].push_back(a);
        }
    }
    vector <int> d(n);
    vector <bool> used(n,false);
    int sum1=0,sum2;
    int u=0;
    i=1;
    u = 0;
    d[0] = c[0][0];
    sum1 = d[0];
    while(i<n)
    {
        if(!used[u]){
        d[i] = max(c[i][u],c[i][u+m]);
        cout << c[i][u] << " " << c[i][u+m] << endl;
        used[u] = true;
        sum1 += d[i];
        }
        u++;
        i++;
    }
    cout << endl << sum1 << endl;
    i=1;
     while(i<n)
    {
        if(!used[u]){
        d[i] = max(c[i][u],c[i][u+m]);
        used[u] = true;
        sum1 += d[i];
        }
        u++;
        i++;
    }

}*/