#include <iostream> 
using namespace std; 
int main() { 
 int n, m, p; 
 while(cin >> n >> m) {
  if (m > n) { 
   p = n; 
   n = m; 
   m = p; 
  } 
  while (m > 0) { 
   p = n % m; 
   if (p != 0) {
    n = m; 
    m = p; 
   } 
   else break; 
     } 
  cout<<(m==1?"YES": "NO")<<endl;
 } 
 return 0; 
}