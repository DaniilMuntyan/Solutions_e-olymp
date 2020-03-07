#include <bits/stdc++.h>
using namespace std;
int a[2000000];
int c[2000000];
int main()
{
    int n;//количество элементов в массиве
    int k = 2000000;
    cin >> n;
    //считываем массив
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    //строим массив с
    for(int i = 0; i < n; i++)
    {
        c[a[i]]++;
    }
    //бежимся по всему отрезку
    //с 0 до k-1
    for(int i = 0; i < k; i++)
    {
        //выводим i c[i] раз
        for(int j = 0; j < c[i]; j++)
            cout<<i<<" ";
    }
    return 0;
}