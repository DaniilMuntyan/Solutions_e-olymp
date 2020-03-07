#include <bits/stdc++.h>
using namespace std;
struct S{
    int first,second;
};
bool f(S a, S b){
    if(a.first < b.first)
        return true;
    return false;
}
bool f1(S a, S b){
    if(a.second < b.second)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector< S > d(n);
    vector <S> p;
    int i;
    for(i = 0; i < n; i++){
        cin >> d[i].first;
        d[i].second = i;
    }
    sort(d.begin(),d.end(),f);
    if(d.size() >= 1 && d[0].first != d[1].first)
    p.push_back({d[0].first, d[0].second});
  /*  for(i = 0; i < n; i++)
        cout << d[i].first << " ";
    cout << endl;*/
    for(i = 1; i < n-1; i++){
        if(d[i].first != d[i-1].first && d[i].first != d[i+1].first){
            //cout << "d[" << i << "].first = " << d[i].first << endl;
            p.push_back({d[i].first,d[i].second});
        }
    }
    if(d[n-1].first != d[n-2].first)
        p.push_back({d[n-1].first,d[n-1].second});

    sort(p.begin(),p.end(),f1);
    for(i = 0; i < p.size(); i++)
        cout << p[i].first << " ";
    cout << endl;
}