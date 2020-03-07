#include <bits/stdc++.h>
using namespace std;
struct S
{
    char a, b;
};
bool check(S a)
{
    if((a.a == 'R' && a.b == 'P'))
        return false;
       if((a.b == 'R' && a.a == 'P'))
return true;
    if(a.a == 'R' && a.b == 'S')
        return true;
        if(a.b == 'R' && a.a == 'S')
            return false;
    if(a.a=='P' && a.b == 'S')
        return false;
        if(a.b=='P' && a.a == 'S')
            return true;

}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t,n,i;
    int win1=0,win2=0;
    cin >> t;
    while(t--){
        cin >> n;
    vector <S> d(n);
        for(i=0;i<n;i++)
        {
            cin >> d[i].a >> d[i].b;
            if(d[i].a != d[i].b)
            if(check(d[i]))
                win1++;
            else
                win2++;
        }
        if(win1 > win2)
            cout << "Player 1" << endl;
        if(win1 < win2)
            cout << "Player 2" << endl;
        if(win1 == win2)
            cout << "TIE" << endl;
        d.clear();
        win1=0;
        win2=0;
    }
}