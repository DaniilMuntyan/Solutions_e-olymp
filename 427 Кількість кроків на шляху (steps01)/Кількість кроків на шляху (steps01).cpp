#include <bits/stdc++.h>
using namespace std;
int getDec(string s){
    int ans = 1;
    for(int i = s.length()-1; i >= 0; --i)
        if(s[i] == 'b')
            ans += pow(2, i+1);
    return ans;
}
string getTwo(int a){
    int n = a;
    if(a == 0)
        return "a";
    string s = "";
    while(n > 0){
        if(n%2==0)
            s += 'a';
        else
            s += 'b';
        n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main() {
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<string >vec;
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k = 0;
    while(s[k] == 'a')
        k++;
    if(k == n){
        s[s.length()-1] = 'b';
        cout << 1 << " " << s << endl;
        return 0;
    }
    s = s.substr(k, s.length()-k);
    for(int i = 0; i < pow(2,n); i++)
        vec.push_back(getTwo(i));
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] == s){
            cout << i+1 << " ";
            if(i+1 == vec.size()){
                for(int p = 0; p < n; p++)
                    cout << 'a';
                cout << endl;
                return 0;
            }
            for(int j = 0; j < n - vec[i+1].length(); j++)
                cout << 'a';
            cout << vec[i+1] << endl;
        }
    }
}