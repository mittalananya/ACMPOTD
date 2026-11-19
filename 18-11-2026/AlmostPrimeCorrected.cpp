#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        int x = i, cnt = 0;
        for (int j = 2; j <= x; j++) {
            if (x % j == 0) {
                cnt++;
                while (x % j == 0) {
                    x /= j; }
            }
        }
        if (cnt == 2) {
            ans++; }
    }
    cout << ans << endl;
    return 0;
}