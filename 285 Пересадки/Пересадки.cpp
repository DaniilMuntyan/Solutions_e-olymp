#include<bits/stdc++.h>
using namespace std;
#define int long long
struct S{
    int x, typ;
};
main() {
    int a, b, c, d;
    vector <S> mas;
    int n = 2;
    while(n--){
        cin >> a >> b;
        if(a > b) swap(a,b);
        S val;
        val.x = a;
        val.typ = 1;
        mas.push_back(val);
        val.x = b;
        val.typ = -1;
        mas.push_back(val);
    }
    if(mas[0].x > mas[3].x || mas[1].x < mas[2].x)
    {
        cout << 0 << endl;
        return 0;
    }
    struct{
        bool operator()(S a, S b) const
        {
            if(a.x < b.x) return true;
            if(a.x == b.x) return a.typ > b.typ;
            return false;
        }
    }comp;
    int cnt = 0;
    int start = 0, finish = 0;
    bool check = false;
    sort(mas.begin(), mas.end(), comp);
    for(int i = 0; i < 4; i++){
        //cout << mas[i].x << " " << mas[i].typ << endl;
        cnt += mas[i].typ;
        if(cnt == 2){
            check = true;
            start = mas[i].x;
          //  cout << start << endl;
        }
        if(cnt == 1 && check){
            finish = mas[i].x;
            break;
        }
    }
    cout << finish - start + 1 << endl;

}