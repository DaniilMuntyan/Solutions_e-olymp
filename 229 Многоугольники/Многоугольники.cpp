#include<iostream>
#include<algorithm>
using namespace std;
struct maxx{
int zn,istar,inova;
};
bool R(maxx a, maxx b){
return (a.zn>b.zn);
}
bool F(maxx a, maxx b){
return (a.istar<b.istar);
}

int main(){
int n,i,n1,j,x,y;
int maxy,a1;
maxx a[10000];
cin>>n;
for(i=0;i<n;i++)
{
cin>>n1;
cin>>x>>maxy;
for(j=0;j<n1-1;j++){
cin>>x>>y;
if(y>maxy)maxy=y;

}
a[i].zn=maxy;
a[i].istar=i;
}
for(i=0;i<n;i++){
a[i].istar=i;
}
sort(a,a+n,R);
for(i=0;i<n;i++){
a[i].inova=i;
}
sort(a,a+n,F);

for(i=0;i<n-1;i++){
cout<<a[i].inova<<" ";
}
cout<<a[n-1].inova<<endl;
return 0;
}