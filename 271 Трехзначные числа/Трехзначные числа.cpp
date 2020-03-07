#include <bits/stdc++.h>
using namespace std;
int sumOfN(int n)
{
    int i = 0,sum = 0;
    while(n > 0)
    {
        sum+=n%10;
        n/=10;
        i++;

    }
    return sum;
}
int main()
{
    int n;
    vector <int> ans;
    cin >> n;
    for(int i = 100; i <= 999;i++)
        if(sumOfN(i) == n)
            ans.push_back(i);
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;


}