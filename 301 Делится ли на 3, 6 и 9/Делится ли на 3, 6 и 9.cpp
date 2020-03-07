#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char h;
    bool isTree = false;
    bool isTwo = false;
    bool isNine = false;
    int sum = 0;
    for(int i = 0; i < s.length(); i++)
    {
        sum += s[i] - '0';
    }
    if(sum % 3 == 0)
        isTree = true;
    if(sum % 9 == 0)
        isNine = true;
    if((s[s.length() - 1] - '0') % 2 == 0)
    {
        isTwo = true;
    }
    if(isTree)
        cout << "Yes" << endl;
        else
        cout << "No" << endl;
    if(isTree && isTwo)
        cout << "Yes" << endl;
        else
        cout << "No" << endl;
    if(isNine)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

}