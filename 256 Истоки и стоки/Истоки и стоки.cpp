#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    int n;
    cin >> n;
    int d[n][n];
    int sum = 0;
    vector <int> s1, s2;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> d[i][j];
            sum += d[i][j];
        }
        if(sum == 0)
            s2.push_back(i+1);
        sum = 0;
    }
    sum = 0;
    for(int j = 0; j < n; j++){
        for(int i = 0; i < n; i++)
            sum += d[i][j];
        if(sum == 0)
            s1.push_back(j+1);
        sum = 0;
    }
    cout << s1.size() << " ";
    for(int i = 0; i < s1.size(); i++)
        cout << s1[i] << " ";
    cout << endl << s2.size() << " ";
    for(int i = 0; i < s2.size(); i++)
        cout << s2[i] << " ";
}