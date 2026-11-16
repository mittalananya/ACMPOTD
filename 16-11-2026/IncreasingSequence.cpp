#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    long long a[2005], ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; }
    for (int i = 1; i < n; i++) {
        if (a[i] <= a[i - 1]) {
            long long k = (a[i - 1] - a[i]) / d + 1;
            ans += k;
            a[i] += k * d; }
    }
    cout << ans << endl;
    return 0;
}