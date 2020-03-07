#include<bits/stdc++.h>
using namespace std;
#define int long long
struct S{
    int x, typ;
};
main() {
    int n;
    cin >> n;
    vector <S> a;
    vector < pair<int,int> > ans;
    int s, f;
  //  cout << endl;
    for(int i = 0; i < n; i++){
        cin >> s >> f;
        S p;
        p.x = s; p.typ = 1;
      //  cout << "add: " << p.x << " " << p.typ << endl;
        a.push_back(p);
        p.x = f; p.typ = -1;
      //  cout << "add: " << p.x << " " << p.typ << endl;
        a.push_back(p);
    }
  //  cout << endl;
    struct{
        bool operator()(S a, S b)const
        {
            if(a.x < b.x) return true;
            if(a.x == b.x) return a.typ > b.typ;
            return false;
        }
    }comparator;
    sort(a.begin(), a.end(), comparator);
    int cnt = 0;
    int start = 0, finish = 0;
    bool check = false;
  /*  for(int i = 0; i < a.size(); i++){
        cout << a[i].x << " " << a[i].typ << endl;
    }*/
    for(int i = 0; i < a.size(); i++){
        if(cnt == 0 && (cnt+a[i].typ) != 0)
            start = a[i].x;
        if(cnt != 0 && (cnt+a[i].typ)==0){
            finish = a[i].x;
            ans.push_back({start, finish});
        }
        cnt += a[i].typ;
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size();i++)
        cout << ans[i].first << " " << ans[i].second << endl;
}