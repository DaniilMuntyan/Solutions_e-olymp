#include <bits/stdc++.h>
using namespace std;
int a[2000000];
int c[2000000];
int main()
{
    int n;//���������� ��������� � �������
    int k = 2000000;
    cin >> n;
    //��������� ������
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    //������ ������ �
    for(int i = 0; i < n; i++)
    {
        c[a[i]]++;
    }
    //������� �� ����� �������
    //� 0 �� k-1
    for(int i = 0; i < k; i++)
    {
        //������� i c[i] ���
        for(int j = 0; j < c[i]; j++)
            cout<<i<<" ";
    }
    return 0;
}