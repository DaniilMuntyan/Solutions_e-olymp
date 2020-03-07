#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin >> n;
  vector <double> d(n);
  double av;
  double sum=0.00;
  for(int i = 0;i < n;i++){
    cin >> d[i];
    if(d[i]>0){
    sum+=d[i];
    c++;
    }
  }
  if(c!=0)
  cout << setprecision(2) << fixed << sum / c << endl;
  else
    cout << "Not Found" << endl;

}