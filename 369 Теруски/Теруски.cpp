#include <bits/stdc++.h>

using namespace std;

vector<string> v;
string st = "AEIJOUY";

void fun(string strok) {
    if (strok.size() == 7) {

        v.push_back(strok);

    } else {

        for (int i = 0; i < 7; i++) {
            if (find(strok.begin(), strok.end(),st[i]) == strok.end()) {
                fun(strok + st[i]);
            }
        }
    }
}

int main() {
    int num = 0;
    fun("");
    cin >> num;
    cout << v[num-1] << endl;
    return 0;
}