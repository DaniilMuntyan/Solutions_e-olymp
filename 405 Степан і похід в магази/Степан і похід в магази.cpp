#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main(){

int a[3][3];
int d1, d2,d3;
cin>>d1>>d2>>d3;
a[0][1]=a[1][0]=min(d1, d2+d3);
a[0][2]=a[2][0]=min(d1+d3, d2);
a[1][2]=a[2][1]= min(d3, d2+d1);
cout<<min(a[0][1]+a[1][2]+a[2][0], a[0][2]+a[2][1]+a[1][0]);


return 0;
}