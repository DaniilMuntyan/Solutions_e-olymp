#include<bits/stdc++.h>
using namespace std;
#define int long long
bool check(int x){
    return x%5 < 2;
}
main(){
    int a, b, c, x0,  n;
    cin >> n >> a >> b >> c >> x0;
    stack<int> s;
    int x = x0, ans = 0;
    for(int i = 1; i <= n; i++){
        x = ((a*x*x + b*x + c)/100);
        x %= 1000000;
        if(check(x)){
            if(!s.empty()) s.pop();
        }else{
            if(s.empty()) s.push(x);
            else s.push(min(s.top(), x));
        }
        if(!s.empty()) ans += s.top();
    }
    cout << ans << endl;
}