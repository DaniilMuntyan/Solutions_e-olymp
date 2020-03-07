#include <bits/stdc++.h>
using namespace std;
int n, z[41];
void R(int sum, int place){
    int i;
    if(sum)
    for(i = 1; i <= min(z[place-1], sum); ++i){
        z[place] = i;
        R(sum - i, place + 1);
    }
    else{
        for(i = 1; i < place; ++i)
            cout << z[i] << " ";
        cout << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n;
    z[0] = n;
    R(n, 1);
    return 0;
}