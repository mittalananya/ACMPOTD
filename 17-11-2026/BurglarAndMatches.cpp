#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    pair<int, int> a[25];
    for (int i = 0; i < m; i++) {
        cin >> a[i].first >> a[i].second; }
    sort(a, a + m, [](pair<int, int> x, pair<int, int> y) {
        return x.second > y.second; });
    long long ans = 0;
    for (int i = 0; i < m && n > 0; i++) {
        int take = min(n, a[i].first);
        ans += 1LL * take * a[i].second;
        n -= take; }
    cout << ans << endl;
    return 0;
}