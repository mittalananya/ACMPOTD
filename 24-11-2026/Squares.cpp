#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (k > n) {
        cout << -1 << endl;
        return 0;
    }

    sort(a.begin(), a.end());

    if (k == n) {
        cout << 0 << " " << 0 << endl;
    }
    else {
        cout << a[n - k - 1] + 1 << " " << 0 << endl;
    }

    return 0;
}