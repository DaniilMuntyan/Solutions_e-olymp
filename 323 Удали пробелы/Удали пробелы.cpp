#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector <string> ans;
    while(cin >> s)
        ans.push_back(s);
    for(int i = 0; i < ans.size();i++)
        cout << ans[i] << " ";
    cout << endl;
}