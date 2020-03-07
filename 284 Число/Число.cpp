#include <bits/stdc++.h>
using namespace std;
bool f(string s1, string s2)
{
    if((s1 + s2) > (s2 + s1))
        return true;
    else
        return false;

}
int main()
{
   string a;
   vector <string> s;
   int j;
   int i = 0;
   while(cin >> a){
    s.push_back(a);
   }
   
   
    sort(s.begin(),s.end(),f);
    for(i=0;i<s.size();i++)
    {
        cout << s[i];
    }


}