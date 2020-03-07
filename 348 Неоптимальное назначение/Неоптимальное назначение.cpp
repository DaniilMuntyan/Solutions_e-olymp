#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i,j;
    cin >> n;
    vector <int> a(n,0);
    vector <int> b(n,0);
    for(i=1;i<n;i++){
        a[i] = 1;
        b[i] = 100;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||i==1){
            if(i==0)
                cout << a[j]<<" ";

            if(i==1)
                cout << b[j] <<" ";
            }else
            cout << 0 <<" ";


        }
        cout << endl;
    }
}