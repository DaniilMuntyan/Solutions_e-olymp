#include <bits/stdc++.h>
#include <string>
using namespace std;
struct S{
    int x,y, number;
};
int main(){
    int n, x,y;
    cin >> n;
    vector <S> a;
    vector <S> b;
    vector <S> c;
    vector <S> d;
    for(int i = 0; i < 5*n;i++){
        S t;
        cin >> x >> y;
        t.x = x;
        t.y = y;
        t.number = i+1;
        if(abs(x%2) == 0 && abs(y%2)==0)
            a.push_back(t);
        if(abs(x%2) == 0 && abs(y%2) == 1)
            b.push_back(t);
        if(abs(x%2) == 1 && abs(y%2)==0)
            c.push_back(t);
        if(abs(x%2) == 1 && abs(y%2) == 1)
            d.push_back(t);
    }
    if(a.size() >= n)
    {
        cout << "OK" << endl;
        for(int i = 0; i < n; i++)
            cout << a[i].number << " ";
        return 0;
    }
    if(b.size() >= n)
    {
        cout << "OK" << endl;
        for(int i = 0; i < n; i++)
            cout << b[i].number << " ";
        return 0;
    }
    if(c.size() >= n)
    {
        cout << "OK" << endl;
        for(int i = 0; i < n; i++)
            cout << c[i].number << " ";
        return 0;
    }
    if(d.size() >= n)
    {
        cout << "OK" << endl;
        for(int i = 0; i < n; i++)
            cout << d[i].number << " ";
        return 0;
    }
}