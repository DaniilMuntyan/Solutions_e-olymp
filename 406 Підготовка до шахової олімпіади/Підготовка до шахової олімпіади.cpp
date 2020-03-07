#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main(){

    long long n;
    cin>>n;
    if(n==1){
    cout<<1;
    }else
    if(n!=0){
    n-=2;
    cout<<n/3+2;
}

else {
    cout<<0<<endl;
}

    return 0;
}