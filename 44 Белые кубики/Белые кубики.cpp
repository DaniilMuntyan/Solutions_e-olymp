#include<bits/stdc++.h>
using namespace std;
#define int long long
main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << a*b*c << " " << (6*a*b*c) - (2*(a*b+a*c+b*c)) << endl;
}