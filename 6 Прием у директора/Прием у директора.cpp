#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
using namespace std;
struct S
{
 int b, e;
};
bool f(S r, S t)
{
 if(r.e > t.e)
 return false;
 return true;; 
}
int main()
{
 int n;
 int k =1;
 cin >> n;
 S a[n+1];
 int i;
 for(i=0;i<n;i++)
 {
 string s;
 cin >> s;
 a[i].b = ((s[0]-'0')*10+(s[1]-'0'))*60 + (((s[3]-'0')*10+(s[4]-'0')));
 s = "";
 cin >> s;
 a[i].e = ((s[0]-'0')*10+(s[1]-'0'))*60 + (((s[3]-'0')*10+(s[4]-'0')));
 }
 sort(a,a+n,f);
 int h = a[0].e;
 k=1;
 for(i=1;i<n;i++)
 {
  if(a[i].b >= h){
  h = a[i].e;
  k++;
  }
 }
 cout << k << endl;
}