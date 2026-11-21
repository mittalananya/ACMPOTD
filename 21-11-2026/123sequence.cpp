#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[1000005], c1 = 0, c2 = 0, c3 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            c1++; }
        else if (a[i] == 2) {
            c2++; }
        else {
            c3++; }
    }
    cout << n - max(c1, max(c2, c3)) << endl;
    return 0;
}