#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double a[101];
    int i;
    int k = 0;
    double sum = 0.00;
    for(i = 0; i < n; i++)
        cin >> a[i];
    for(i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            k++;
            sum = sum + a[i];
        }
    }
    cout << k << " " << fixed << setprecision(2) <<sum << endl;
}