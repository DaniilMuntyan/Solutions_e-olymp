#include <bits/stdc++.h>
using namespace std;
int main()
{
 /*   freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    int n;
    cin >> n;
    vector <double> d(n);
    int i,c=0;
    for(i=0;i<n;i++){
        cin >> d[i];
        if(d[i] < 30 && d[i] > 0)
            c++;

    }

   double ans = c*0.2;
   double temp = 0; i = 0;
   while(ans > temp)
   {
       temp += 0.9;
       i++;
   }
    cout << i<< " " << c << endl;
}