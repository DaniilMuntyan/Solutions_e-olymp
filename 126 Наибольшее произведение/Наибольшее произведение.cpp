#include <bits/stdc++.h>
using namespace std;
string s,first;
bool isAllNull(string s)
{
    for(long long i = 0; i < s.length();i++)
    {
        if(s[i] != '0')
            return false;
    }
    return true;
}
string correct(string s)
{
    long long i = 0;
    string h = s;
    while(h[i] == '0'){
        h.erase(h.begin(),h.begin()+1);
        if(h[0] != '0')
            break;
    }
    return h;
}
long long func(long long i)
{
    long long k = 1,l;
    if(s[i] == '0'){
      //  s = correct(s);
      s.erase(s.begin(), s.begin()+1);
    for(long long y = i; y < s.length();y++)
            s[y] = '9';
    }
    else{
    l = (s[i] - '0') - 1;
    s[i] = l + '0';
    }
    //cout << s << endl;
    if(s[0] == '0')
    {
      s.erase(s.begin(), s.begin()+1);
      for(long long y = 0; y < s.length();y++)
        s[y] = '9';
    }
    if(isAllNull(s))
    {
        s.erase(s.begin(),s.begin()+1);
        for(long long y = 0; y < s.length();y++)
            s[y] = '9';
    }
    for(long long j = 0; j < s.length();j++){
        if(j <= i)
        k*=(s[j]-'0');
        else
            k*=9;
    }
    return k;

}
long long func1()
{
     long long k = 1;
    for(long long j = 0; j < s.length();j++)
        k*=(s[j]-'0');
    return k;
}
int main()
{
    cin >> s;
    first = s;
    if(s[0] == '1'){

    }
    long long maxx = -1,r;
    for(long long i = 0; i < s.length()-1;i++)
    {
        r = func(i);
        //cout <<"!" << i  <<"   " <<  r << endl;
        if(maxx < r)
            maxx = r;
        s = first;
    }
    if(maxx < func1())
        maxx = func1();
    cout << maxx << endl;
}