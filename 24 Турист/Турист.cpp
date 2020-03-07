#include <bits/stdc++.h>
using namespace std;
#define int long long
bool f(pair<int, int> a, pair<int,int> b){
    if(a.first < b.first) return true;
    if(a.first == b.first) return a.second > b.second;
    return false;
}
main()
{
    int k, w;
    cin >> k >> w;
    vector < pair<int,int> > d(3);
    for(int i = 0; i < 3; i++)
        cin >> d[i].first >> d[i].second;
    sort(d.begin(), d.end(), f);
    int c = 0;
    int i = 0;
    while(i < 3){
        c += d[i].second;
        w -= d[i].first;
        if(w < 0)
        {
            cout << "NO" << endl;
            return 0;
        }
        if(c >= k){
            cout << "YES" << endl;
            return 0;
        }
        i++;
    }
    cout << "NO" << endl;

}