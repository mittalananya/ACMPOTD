#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    int sum = 0, mx = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += a;
        mx = max(mx, a);
    }

    if (sum - mx <= s)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}