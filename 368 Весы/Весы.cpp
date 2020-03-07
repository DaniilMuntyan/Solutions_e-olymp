#include <bits/stdc++.h>
#define elif else if
#define int long
using namespace std;
#undef int
int main() {
    #define int long

    int n;
    cin >> n;
    int n1 = n;
    vector<int> a;
    while(n) {
        a.push_back(n % 3);
        n /= 3;
    }
    a.push_back(0);
    a.push_back(0);
    int c = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 2) {
            a[i+1]++;
        }
        if (a[i]) {c++;}
    }
    cout << c << endl;
    return 0;
}