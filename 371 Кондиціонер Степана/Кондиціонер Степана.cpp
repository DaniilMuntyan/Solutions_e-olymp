#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Troom, Tcond;
    cin >> Troom >> Tcond;
    string s;
    cin >> s;
    int Tr = Troom,Tc = Tcond;
    if(s == "heat")
    {
        Tc -= Tr;
        if(Tc >= 0)
            cout << Tcond << endl;
            else
        cout << Troom << endl;
        return 0;
    }
    if(s == "freeze")
    {
        Tr -= Tc;
        if(Tr > -1)
            cout << Tcond << endl;
        else
            cout << Troom << endl;

        return 0;
    }
    if(s == "auto")
    {
        cout << Tc << endl;
        return 0;
    }
    if(s == "fan")
    {
        cout << Tr << endl;
        return 0;
    }
}