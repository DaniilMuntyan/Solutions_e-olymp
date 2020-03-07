#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, c=0;
    cin >> n;
    char t[n][n], a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            a[i][j] = '1';
            cin >> t[i][j];
            if(t[i][j] == 'C'){
                c++;
                a[i][j] = '.';
            }
        }
    }
    int k = 0;
    char d = '1';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == '.')
                k++;
            a[i][j] = d;
            if(k >= c/2)
                d = '2';
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j];
        }
        cout << endl;
    }


}