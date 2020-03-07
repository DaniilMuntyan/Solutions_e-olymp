#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    set<string> SetS;
set<string>::iterator iter;
char s[201];
scanf("%[^a-zA-Z]",s);
    while(scanf("%[a-zA-Z]",s) == 1)
{
  for(int i = 0; i < strlen(s); i++) s[i] = tolower(s[i]);
  SetS.insert(s);
  scanf("%[^a-zA-Z]",s);
}
for(iter = SetS.begin(); iter != SetS.end(); iter++)
  printf("%s\n",(*iter).c_str());
}