#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int n,m;
    cin >> n >> m;
    vector <int> pl(n*m);
    int i,j;
    for(i=0;i<n*m;i++)
    {
        cin >> pl[i];
    }
    int k, c = 0;
    cin >> k;
    vector <int> w(k);
    for(i=0;i<k;i++)
        cin >> w[i];
    sort(pl.begin(),pl.end());
    sort(w.begin(),w.end());
    for(i=j=0;i<n*m && j < k;i++)
    {
        if(pl[i] >= w[j])
        {
            c++;
            j++;
        }
    }
    cout << c << endl;
  

}