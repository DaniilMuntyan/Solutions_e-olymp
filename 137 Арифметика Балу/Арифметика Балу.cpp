#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long
#define N 1000000
map<int, int> m;
int arr[N];
int func(int n) {
    if(n < N)
        return arr[n];
    if(m[n] > 0)
        return m[n];
    if(n % 3 == 0)
        return m[n] = func(n/3) + 5;
    return m[n] = func(n - 4) + 2;
}
main() {
    int n, a, b;
    cin >> n;
    arr[0] = -N;
    arr[1] = 0;
    arr[2] = -N;
    arr[3] = 5;
    arr[4] = -N;
    arr[5] = 2;
    arr[6] = -N;
    arr[7] = 7;
    arr[8] = -N;
    for(int i = 9; i <= N; i++) {
        if(i % 3 == 0)
            arr[i] = min(arr[i / 3] + 5, arr[i - 4] + 2);
        else
            arr[i] = arr[i - 4] + 2;
    }
    int result = func(n);
    if(result > 1e12 || result < 0)
        result = 0;
    cout << result << endl;

}