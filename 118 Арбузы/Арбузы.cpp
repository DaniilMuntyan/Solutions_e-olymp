#include<iostream>
using namespace std;
int main()
{
    int n, min=1000000000, max=0, a, n1;
    cin>>n;
    n1=n;
    while(n--)
    {
        cin>>a;
        if(a>max)max=a;
        if(a<min)min=a;
    }
    if(n1>1)
    {
        cout<<min<<" "<<max<<endl;
    }else
    {
          cout<<"Ooops!"<<endl;
    }
}