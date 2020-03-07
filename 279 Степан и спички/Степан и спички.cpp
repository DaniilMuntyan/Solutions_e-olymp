#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    vector <int> d(12);
    int i;
    bool f = false;
    for(i=0;i<n;i++){
        for(int j =0;j<12;j++)
        {
            cin >> d[j];
        }
        sort(d.begin(),d.end());
        int a;
        for(int j = 0;j<12;j+=4)
        {
            a = d[j];
            for(int k = j; k < j+4;k++)
            {
                if(d[k] != a){
                    f = true;
                    break;
                }
            }
            if(f)
                break;

        }
        if(f)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
        f = false;
    }

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