#include <bits/stdc++.h>
using namespace std;
bool f (string a, string b)
{
    return a+b > b+a;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string s[100];
    while(cin >> n){
            if(n == 0)
            break;
    for(int i = 0;i < n;i++)
        cin >> s[i];
        sort(s,s+n,f);
    for(int i = 0;i < n;i++){
        cout << s[i];
        s[i] = "";
    }
    cout << endl;
    }
    //s.clear();

}