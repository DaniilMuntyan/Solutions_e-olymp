#include <iostream>
#include <string>
using namespace std;
int main()
{
string s;
cin >> s;
if(s[0] == '-')
cout << s[2] << endl;
else
cout << s[1] << endl;
return 0;
}