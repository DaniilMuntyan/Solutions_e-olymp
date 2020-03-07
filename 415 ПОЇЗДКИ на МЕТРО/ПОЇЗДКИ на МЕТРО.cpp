#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int k = n;
    int sum = 0, sum2 = 0,sum3=0;
    int m = n%10;
    while(n-100 >= 0)
    {
        n-=100;
        sum+=200;
    }
    while(n-50 >= 0)
    {
        n-=50;
        sum+=125;
    }
    while(n-10 >= 0)
    {
        n-=10;
        sum+=30;
    }
    while(n-1>=0){
        n-=1;
        sum+=4;
    }
    k+=10-m;
    n = k;
     while(n-100 >= 0)
    {
        n-=100;
        sum2+=200;
    }
    while(n-50 >= 0)
    {
        n-=50;
        sum2+=125;
    }
    while(n-10 >= 0)
    {
        n-=10;
        sum2+=30;
    }
    while(n-1>=0){
        n-=1;
        sum2+=4;
    }
    k+=10;
    n=k;
      while(n-100 >= 0)
    {
        n-=100;
        sum3+=200;
    }
    while(n-50 >= 0)
    {
        n-=50;
        sum3+=125;
    }
    while(n-10 >= 0)
    {
        n-=10;
        sum3+=30;
    }
    while(n-1>=0){
        n-=1;
        sum3+=4;
    }
    k+=10;
    n=k;
    int sum4 = 0;
       while(n-100 >= 0)
    {
        n-=100;
        sum4+=200;
    }
    while(n-50 >= 0)
    {
        n-=50;
        sum4+=125;
    }
    while(n-10 >= 0)
    {
        n-=10;
        sum4+=30;
    }
    while(n-1>=0){
        n-=1;
        sum4+=4;
    }
    cout <<min(sum,min(sum2,min(sum4,sum3))) << endl;
}