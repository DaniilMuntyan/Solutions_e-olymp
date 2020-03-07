#include <bits/stdc++.h>
using namespace std;
#define int long long
int fuct(int a){
    int ans =1;
    for(int i = 1; i <= a; i++)
        ans*=i;
    return ans;
}
main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,k;
    cin >> n >> k;
    cout << fuct(n)/(fuct(n-k)*fuct(k)) << endl;

}