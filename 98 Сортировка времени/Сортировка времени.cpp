#include <bits/stdc++.h>
using namespace std;
#define int long long
struct S{
    int a, b, c;
};
main() {
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector <S> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i].a >> a[i].b >> a[i].c;
    struct{
        bool operator()(S a, S b) const{
            if(a.a < b.a) return true;
            if(a.a == b.a){
                if(a.b < b.b) return true;
                if(a.b == b.b)
                    if(a.c < b.c) return true;
            }
            return false;
        }
    }comparator;
    sort(a.begin(), a.end(), comparator);
    for(int i = 0; i < n; i++)
        cout << a[i].a << " " << a[i].b << " " << a[i].c << endl;

}