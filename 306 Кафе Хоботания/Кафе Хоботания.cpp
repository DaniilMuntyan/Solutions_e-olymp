#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    int i,c = 0,j;
    vector <int> tips(n);
    for(i=0;i<n;i++)
        cin >> tips[i];
    sort(tips.rbegin(),tips.rend());
    for(i=0;i<n;i++)
    {
        if(tips[i] > 0)
        {
            c += tips[i];
        }else
       break;
        for(j = i+1;j<n;j++)
            tips[j]--;

    }
    cout << c << endl;
}