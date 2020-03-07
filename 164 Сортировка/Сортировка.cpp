#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <long long> d(n);
    vector <long long>::iterator it;
    if(n%2==0)
    {
        for(long long i = 0;i < n;i++)
            cin >> d[i];
            sort(d.rbegin(),d.rend());
            for(long long i = 0; i < n;i++)
            {
                if(d[i] != d[i-1])
                    cout << d[i] << endl;
            }
    }else{
  for(long long i = 0;i < n;i++)
            cin >> d[i];
            sort(d.begin(),d.end());
            for(long long i = 0; i < n;i++)
            {
                if(d[i] != d[i-1])
                    cout << d[i] << endl;
            }
    }
}