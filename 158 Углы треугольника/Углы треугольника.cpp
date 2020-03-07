#include <bits/stdc++.h>
using namespace std;
struct S{
double x , y;
};
int main()
{/*
    S d[3];
    int i;
    for(i=0;i<3;i++)
    {
        cin >> d[i].x >> d[i].y;
    }
    double a,b,c,cosA,cosB,cosC;
    a = sqrt(pow(abs(d[0].x-d[1].x),2)+pow(abs(d[0].y-d[1].y),2));
    b = sqrt(pow(abs(d[1].x-d[2].x),2)+pow(abs(d[1].y-d[2].y),2));
    c = sqrt(pow(abs(d[0].x-d[2].x),2)+pow(abs(d[0].y-d[2].y),2));
   // cout << a << " " << b << " " << c << endl;
    if(max(max(a,b),c) == a)
    {
        cosA = (b*b+c*c-a*a)/(2*b*c);
       // cout << cosA << endl;
        cout << setprecision(1)<< fixed << (acos(cosA)*180)/3.14 << endl;
    }else{
      if(max(max(a,b),c) == b)
    {
        cosB = (a*a+c*c-b*b)/(2*a*c);
       // cout << cosB << endl;
        cout <<setprecision(1)  <<fixed<<(acos(cosB)*180)/3.14 << endl;
    }else
       if(max(max(a,b),c) == c)
    {
        cosC = (b*b+a*a-c*c)/(2*b*a);
      //  cout << cosC << endl;
        cout << setprecision(1)<<fixed  <<(acos(cosC)*180)/3.14 << endl;
    }
    }*/

  /* int i;
    int n;
    cin >> n;
     S d[n+1];
     vector <double> s(n);
     S v[n+1];
    for(i=0;i<n;i++)
    {
        cin >> d[i].x >> d[i].y;
        if(i!=0)
        {
            s[i]=sqrt(pow(d[i].x-d[i-1].x,2)+pow(d[i].y-d[i-1].y,2));
            v[i].x = d[i].x-d[i-1].x;
            v[i].y = d[i].y-d[i-1].y;
        }
    }
      if(n==3)
    {
        cout << "YES" << endl;
        return 0;
    }
    s[n] = sqrt(pow(d[n-1].x-d[0].x,2)+pow(d[n-1].y-d[0].y,2));
    v[n].x = d[n-1].x  - d[0].x;
    v[n].y = d[n-1].y-d[0].y;
    bool ans = false;
    cout << (v[1].x*v[1+1].x + v[1].y*v[1+1].y) << "  ";
     if((v[1].x*v[1+1].x + v[1].y*v[1+1].y) >= 0){
    for(i=2;i<n;i++)
    {
       if((v[i].x*v[i+1].x + v[i].y*v[i+1].y) < 0)
       {
           ans = true;
           break;
       }
       cout << (v[i].x*v[i+1].x + v[i].y*v[i+1].y) << "   ";
    }
    cout << endl;
    if(ans)
    cout << "NO" << endl;
    else
        cout << "YES" << endl;
     }else
    {
         for(i=2;i<n;i++)
    {
       if((v[i].x*v[i+1].x + v[i].y*v[i+1].y) > 0)
       {
           ans = true;
           break;
       }
    }
    if(ans)
    cout << "NO" << endl;
    else
        cout << "YES" << endl;
    }
*/

 /*  for(i=1;i<=n;i++)
        cout << setprecision(6) << fixed << s[i] << endl;*/

    S d[3];
    int i;
    for(i=0;i<3;i++)
    {
        cin >> d[i].x >> d[i].y;
    }
    double a,b,c,cosA,cosB,cosC;
    a = sqrt((d[0].x-d[1].x)*(d[0].x-d[1].x)+(d[0].y-d[1].y)*(d[0].y-d[1].y));
    b = sqrt((d[1].x-d[2].x)*(d[1].x-d[2].x)+(d[1].y-d[2].y)*(d[1].y-d[2].y));
    c = sqrt((d[0].x-d[2].x)*(d[0].x-d[2].x)+(d[0].y-d[2].y)*(d[0].y-d[2].y));
   // cout << a << " " << b << " " << c << endl;
    if(max(max(a,b),c) == a)
    {
        cosA = (b*b+c*c-a*a)/(2*b*c);
       // cout << cosA << endl;
        cout << setprecision(6)<< fixed << (acos(cosA)*180)/M_PI << endl;
    }else{
      if(max(max(a,b),c) == b)
    {
        cosB = (a*a+c*c-b*b)/(2*a*c);
       // cout << cosB << endl;
        cout <<setprecision(6)  <<fixed<<(acos(cosB)*180)/M_PI << endl;
    }else
       if(max(max(a,b),c) == c)
    {
        cosC = (b*b+a*a-c*c)/(2*b*a);
      //  cout << cosC << endl;
        cout << setprecision(6)<<fixed  <<(acos(cosC)*180)/M_PI << endl;
    }
    }







}