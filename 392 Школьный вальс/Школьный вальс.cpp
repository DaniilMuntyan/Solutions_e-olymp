#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    long long k = 0;
    long long a[n+1],b[m+1];
    long long min2;
    long long y;
    long long i, j;
    bool used[m+1];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
int c;
    cin >> b[0];
    min2 = b[0];
    used[0]=false;
    for(j=1;j<m;j++){
        cin >> b[j];
        if(b[j] < min2){
            min2 = b[j];
            c=j;
        }
            used[j]=false;
    }
     if(m==0 || n ==0)
    {
        cout << 0 << endl;
    }else{
    sort(a,a+n);
    sort(b,b+m);
        y = 1;
        i=0;
        do
        {
            if(i > n)
                break;
            if(a[i] < min2){
             i++;
            }else{
            j=0;
            while(j<m)
            {
                if(a[i] >= b[j]&&!used[j])
                {
                    k++;
                    used[j]=true;
                    break;
                }
                j++;
            }

            i++;
            }
            if(i > n)
                break;
        }while(i < n);
    cout <<  k << endl;
    }
    return 0;
}