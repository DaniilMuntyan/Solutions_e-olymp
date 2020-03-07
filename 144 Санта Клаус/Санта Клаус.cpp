#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n, m,k;
    cin >> n >> m >> k;
    vector <int> d(m);
    queue <int> q;
    vector<int> g(k);
    vector <int> t(n);
    int i,c=0,j;
    for(i=0;i<m;i++){
        cin >> d[i];
    t[d[i]-1] = 1;
    }
    for(j=0;j<k;j++){
        cin >> g[j];
        t[g[j]-1] = 1;
    }
    for(i=0;i<n;i++){
        if(t[i]==0){
            c++;
            q.push(i+1);
        }
    }
    cout << c << endl;
    k = q.size();
    for(i=0;i<k;i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

}