#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(a >= 9 && a <= 11){
        cout << "Autumn"<< endl;
        return 0;
    }
    if(a == 12 || a == 1 || a == 2){
        cout << "Winter" << endl;
        return 0;
    }
    if(a >= 3 && a <= 5){
        cout << "Spring"  << endl;
        return 0;
    }
    if(a >= 6 && a <= 8){
        cout << "Summer" << endl;
        return 0;
    }
}