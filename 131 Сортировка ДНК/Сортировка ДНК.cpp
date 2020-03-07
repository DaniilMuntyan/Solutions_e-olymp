#include <bits/stdc++.h>
using namespace std;
#define int long long
struct S{
    string s;
};
inline int getNum(string s){
    int cA = 0, cC = 0, cG = 0, cT = 0;
    int res = 0;
    map <char, int> m;
    m.insert({'A', 0});
    m.insert({'C', 0});
    m.insert({'G', 0});
    m.insert({'T', 0});
    for(int i = 0; i < s.length(); i++)
        if(i != s.length()-1)
            for(int j = i+1; j < s.length(); j++)
                if(s[j] < s[i])
                    res++;
    return res;

}
main() {
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    struct{
        bool operator()(S a, S b)const{
            if(getNum(a.s) < getNum(b.s))
                return true;
            return false;
        }
    }comparator;

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector <S> a;
        for(int i = 0; i < m; i++){
            S curr;
            cin >> curr.s;
            a.push_back(curr);
        }
        sort(a.begin(), a.end(), comparator);
        for(int i = 0; i < m; i++)
            cout << a[i].s << endl;
        cout << endl;
    }
}