#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    cin >> p;
    bool c = false;
    bool f = false;
    string s1, s2, n;
    while(p--){
        cin >> n >> s1;
        cout << n << " ";
        if(next_permutation(s1.begin(),s1.end()))
            f = true;
        else
            f = false;
        if(f)
            cout << s1 << endl;
        else
            cout << "BIGGEST" << endl;
    }
}