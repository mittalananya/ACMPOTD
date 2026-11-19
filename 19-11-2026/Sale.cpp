#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[105];
    for (int i = 0; i < n; i++) {
        cin >> a[i]; }
    sort(a, a + n);
    int ans = 0;
    for (int i = 0; i < m && i < n; i++) {
        if (a[i] < 0) {
            ans += abs(a[i]); }
        else {
            break; }
    }
    cout << ans << endl;
    return 0;
}