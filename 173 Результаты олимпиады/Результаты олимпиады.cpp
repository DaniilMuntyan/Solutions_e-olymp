#include <bits/stdc++.h>
using namespace std;
struct S
{
    int id;
    int ball;
};
bool f(S a, S b)
{
    if(a.ball > b.ball)
        return true;
        if(a.ball < b.ball)
    return false;
    if(a.id < b.id)
        return true;
    return false;
}

int main()
{
//    ifstream cin("input.txt");
//    ofstream cout("output.txt");
    int n;
    cin >> n;
    S a[n];
    for(int i = 0; i < n;i++)
    {
        cin >> a[i].id >> a[i].ball;
    }
    sort(a,a+n,f);
    for(int i=0;i<n;i++)
        cout << a[i].id << " " << a[i].ball << endl;
}