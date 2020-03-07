#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector <long long> a(n,0);
    long long i,j,k;
    for(i=0;i<n;i++){
        cin >> k;
        if(k <= n)
        a[k-1] = 1;

    }
    for(i=0;i<n;i++)
        if(a[i]==0){
        cout << i+1 << endl;
        return 0;
        }
    cout << "0" << endl;



    return 0;
}