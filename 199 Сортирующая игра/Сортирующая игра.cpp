#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a(9);
int k, n;
queue< vector<int> > q;
map< vector<int>, int> d;
vector <int> func(int l){
    vector <int> ans(n), a1 = a;
    copy(a1.begin()+l, a1.begin()+l+k, ans.begin());
    reverse(ans.begin(),ans.begin()+k);
    int c = 1;
    for(register int i = l; ; i++){
        a1[i] = ans[c-1];
        if(c == k)
            break;
        c++;
    }
    return a1;
}
inline bool check(vector <int> a, vector <int> b){
    for(register int i = 0; i < n; i++)
        if(a[i] != b[i])
            return false;
    return true;
}
void bfs(){
    d.clear();
    while(!q.empty()) q.pop();
    vector <int> f(n);
    for(int p = 0; p < n; p++)
        f[p] = a[p];
    sort(f.begin(), f.end());
    q.push(a);
    d.insert({a, 1});
    while(!q.empty()){
        vector <int> curr = q.front();
        q.pop();
        a = curr;
        if(check(curr,f))
        {
            cout << d[curr]-1 << endl;
            return;
        }
        for(register int i = 0; i < n-k+1; i++){
            vector<int> j = func(i);
            if(!d[j])
            {
                q.push(j);
                d[j] = d[curr] + 1;
            }
        }
    }
    cout << "-1" << endl;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    while(cin >> n >> k){
        for(int i = 0; i < n; i++)
            cin >> a[i];
        bfs();
    }

}