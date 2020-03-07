#include <bits/stdc++.h>
using namespace std;
    int n,sum = 0;

    int k = 0;
    int c = 0;
vector <int> a;
int i,j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> j;
        a.push_back(j);

    }
    j = 0;
    for(i=0;i<a.size();i++)
    {
        j=i;
        while(j<a.size() && a[i] == a[j])
        {
            j++;
            c++;
        }
        if(c >=3)
        {
            sum+=c;
            a.erase(a.begin()+i,a.begin()+i+c);
            if (i>=2)i-=3;
            else i=-1;
        }
        c=0;
    }
    cout << sum << endl;
}