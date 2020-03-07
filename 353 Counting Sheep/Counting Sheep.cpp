#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t;
    int c = 0, k=0;
    string s;
    cin >> n;
    while(n--){
        c++;
        cin >> t;
        for(int i = 0; i < t; i++){
            cin >> s;
            if(s == "sheep")
                k++;
        }
        cout << "Case " << c << ": This list contains " << k << " sheep." << endl;
        k=0;
        cout << endl;
    }

}