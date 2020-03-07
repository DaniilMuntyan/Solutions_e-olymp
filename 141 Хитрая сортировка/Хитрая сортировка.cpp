#include <bits/stdc++.h>
using namespace std;
bool f(int a, int b)
{
    if(a%10 < b%10)
        return true;
    if(a%10 > b%10)
    return false;
    if(a < b)
        return true;
    return false;
}
int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int n;
    cin >> n;
    vector <int> a(n);
    int i;
    for(i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end(),f);
    for(i=0;i<n;i++)
        cout << a[i] << " ";

}