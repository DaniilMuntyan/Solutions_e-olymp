#include <bits/stdc++.h>
using namespace std;
vector <int> a;
int i = 0;
int c = 0;
int b;
int main()
{
    ios_base::sync_with_stdio(0);

    while(cin >> b)
    {
        if(b==0)
            break;

        i++;
        a.push_back(b);

    }
    int n = i;
    int d = *max_element(a.begin(),a.end());
    for(i=0;i<a.size();i++)
    {
        if(a[i] == d)
            c++;
    }
    cout << c << endl;

}