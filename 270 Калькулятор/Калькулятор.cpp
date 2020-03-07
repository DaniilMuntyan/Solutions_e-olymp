#include <bits/stdc++.h>
using namespace std;
const int INF = 100000000000;
int main()
{
    int n;
    cin >> n;
    int i;
    vector <int> a(n+1);
    for(i=1;i<=n;i++)
        a[i] = INF;
    a[1] = 0;
    vector <int> ans(n+1);
    vector <int> res;
    ans[1] = 0;
    for(i=2;i<=n;i++)
    {
        if(i>1){
            a[i] = a[i-1] + 1;
            ans[i] = i-1;
        }
        if(i%2==0 && a[i] > a[i/2]+1)
        {
            a[i] = a[i/2]+1;
            ans[i] = i/2;
        }
        if(i%3==0 && a[i] > a[i/3] + 1){
            a[i] = a[i/3] + 1;
            ans[i] = i/3;
        }
    }
    int p = ans[n];
    cout << a[n] << endl;
    res.push_back(n);
    res.push_back(p);
    while(p!=0)
    {
        p = ans[p];
        if(p!=0)
        res.push_back(p);
    }
   if(a[n] == 0){
        cout << "1" << endl;
        return 0;
    }
    reverse(res.begin(),res.end());
    for(i = 0; i < res.size();i++)
        cout << res[i] << " ";

}