#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long
map <int, int> m;
int n, p, q;
int f(int k) {
    map<int, int>::iterator it = m.find(k);
    if(k == 0)
        return 1;
    if(it != m.end())
        return m[k];
    return m[k] = f(k/p) + f(k/q);
}
main() {
    cin >> n >> p >> q;
    cout << f(n) << endl;
}