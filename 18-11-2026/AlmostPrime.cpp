#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int j = 2; j <= i; j++) {
            if (i % j == 0) {
                cnt++;
                while (i % j == 0) {
                    i /= j; }
            }
        }
        if (cnt == 2) {
            ans++; }
    }
    cout << ans << endl;
    return 0;
}