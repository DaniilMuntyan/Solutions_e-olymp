#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    if(n==1)
    {
        int a;
        cin >> a;
        cout << 1 << endl << a << endl;
        return 0;
    }
    int i,j;
    vector <int> a(n);
    vector <int> d(n+1);
    vector <int> p(n);
    vector <int> q;
    int ans;
    int pos;
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=0;i<n;i++)
    {
        d[i] = 1;
        p[i] = -1;
        for(j = 0; j < i;j++)
        {
            if(a[j] < a[i])
            {
                if(d[i] < d[j]+1)
                {
                    d[i] = d[j] + 1;
                    p[i] = j;
                    pos = i;
                }
            }
        }
    }
    ans = d[0];
    for(i=0;i<n;i++)
        if(ans < d[i]){
            ans = d[i];
            pos = i;
        }
        bool check = false;
        for(i=0;i<n;i++)
        {
            if(p[i] != -1)
            {
                check = true;
                break;
            }
        }
    if(p[ans] == -1 && !check)
    {
        cout << a[n-1] << endl;
        return 0;
    }
    while(pos != -1)
    {
        q.push_back(a[pos]);
        pos = p[pos];
    }
    cout << q.size() << endl;
    for(i = q.size()-1;i>=0;i--)
        cout << q[i] << " ";
        cout << endl;


}