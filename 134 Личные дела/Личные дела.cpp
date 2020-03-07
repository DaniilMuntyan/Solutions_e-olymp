#include <bits/stdc++.h>
using namespace std;
struct S{

    string Class, LastName, Name, date;
};
long long invert(string a){
    long long h = 0;
    long long k = 1;
    for(int i = a.length()-1; i >= 0; i--)
    {
        h += k*(a[i] - '0');
        k*=10;
    }
    return h;
}
bool f1 (S a, S b){
    if(a.LastName < b.LastName)
        return true;
    return false;
}
bool f(S a, S b){
    string t,t1;
    char r,o;
    long long p,p1;
    t = a.Class;
    r = t[t.length()-1];
    t.erase(t.length()-1,1);
    t1 = b.Class;
    o = t1[t1.length()-1];
    t1.erase(t1.length()-1,1);
    p = invert(t);
    p1 = invert(t1);
    if(p < p1){
        return true;
    }
    else if(a.Class == b.Class)
        return f1(a,b);
        else
            if(p == p1 && r < o)
                return true;

    return false;

}
int main()
{
    int n=50,i;
    cin >> n;
    vector <S> a(n);
    vector <string> d(n);
    string s;
    for(i = 0; i < n; i++)
    {
        cin >> s;
        a[i].LastName = s;
        cin >> s;
        a[i].Name = s;
        cin >> s;
        a[i].Class = s;
        cin >> s;
        a[i].date = s;
    }
    sort(a.begin(), a.end(),f);
    for(i = 0; i < n; i++)
        cout << a[i].Class << " " << a[i].LastName << " " << a[i].Name << " " << a[i].date << endl;


}