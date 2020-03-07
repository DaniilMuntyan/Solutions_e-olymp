#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,mIn = 100000000000, mAx = -1000;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a <= mIn)
            mIn = a;
        if(a >= mAx)
            mAx = a;
    }
    cout << (mAx + mIn)<< endl;

}