#include <bits/stdc++.h>
using namespace std;
int t,A,C, r,g,b,sum1=0,sum2=0,sum3=0;
int i,j=0;
vector <string> d;
int main()
{
    ios_base::sync_with_stdio(0);
  /*  freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin.tie(0);
    cout.tie(0);*/
    cin >> t;
    for(i=0;i<t;i++)
    {
       cin >> A >> C;
       cin >> r >> g >> b;
       r++;
       sum1 = A*(r*r + g*g + b*b) + C*(min(r,min(g,b)));
       r--;
       g++;
       sum2 = A*(r*r + g*g + b*b) + C*(min(r,min(g,b)));
       g--;
       b++;
       sum3 = A*(r*r + g*g + b*b) + C*(min(r,min(g,b)));
       b--;
       if(sum1 >= sum2 && sum1 >= sum3)
       {
           d.push_back("RED");
            continue;
       }
       if(sum2 >= sum1 && sum2 >= sum3)
       {
           d.push_back("GREEN");
           continue;
       }
       if(sum3 >= sum1 && sum3 >= sum2)
       {
           d.push_back("BLUE");
           continue;
       }

    }
      // cout << sum1 << " " << sum2 << " " << sum3 << endl;

    for(i=0;i<t;i++)
        cout << d[i] << endl;
    return 0;
}