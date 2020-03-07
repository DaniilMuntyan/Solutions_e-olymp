#include <bits/stdc++.h>
using namespace std;
struct S
{
    int a,b;
};
bool f(S a, S b)
{
    if(a.a > b.a)
        return true;
    if(a.a < b.a)
        return false;
    if(a.a == b.a && a.b < b.b)
    return true;
    else
        return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector <S> a(n);
    for(int i = 0; i < n;i++){
        cin >> a[i].a;
        a[i].b = i;
    }
    sort(a.begin(),a.end(),f);
    for(int i = 0;i <n;i++)
        cout <<  a[i].b + 1 << " ";
    cout << endl;


}