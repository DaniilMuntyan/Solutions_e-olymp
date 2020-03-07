#include <bits/stdc++.h>
using namespace std;
int main() {
    map <int, int> m;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b)
        swap(a, b);
    if(c > d)
        swap(c, d);
    for(int i = a; i <= b; i++) {
        for(int j = c; j <= d; j++) {
            m.insert({i * j, 0});
        }
    }
    cout << m.size() << endl;
}