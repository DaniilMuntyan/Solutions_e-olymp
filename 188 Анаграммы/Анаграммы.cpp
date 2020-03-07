#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

    string s1,s2;
    int i;

    cin >> s1 >> s2;
    if(s1.length() != s2.length()){
        cout << "NO" << endl;
        return 0;
    }

    bool used1[s1.length()];
    bool used2[s2.length()];
for(i=0;i<s2.length();i++)
    used2[i]=false;
    int j;
    for(i=0;i<s1.length();i++)
    {
        used1[i] = false;
        for(j=0;j<s2.length();j++)
        {
            if(s1[i] == s2[j] && !used2[j]){
                used1[i] = true;
                used2[j] = true;
                break;
            }
        }
    }
    for(i=0;i<s1.length();i++)
    if(!used1[i]){
            cout << "NO" << endl;
                return 0;
    }
    cout << "YES" << endl;

}