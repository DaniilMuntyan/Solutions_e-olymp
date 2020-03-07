#include <bits/stdc++.h>
using namespace std;
vector <int> d(100001);
int Repr(int n){
    if(d[n] == 0 || n == 0 || n == d[n])
        return n;
    return d[n] = Repr(d[n]);
}
int main()
{
    int n;
    cin >> n;
    int k = n;
    int a;
    int i = 1;
    while(n--){
        cin >> d[i];
        i++;
    }
    n = k;
    for(int i = 1; i <= n; i++)
        cout << Repr(d[i]) << endl;

}