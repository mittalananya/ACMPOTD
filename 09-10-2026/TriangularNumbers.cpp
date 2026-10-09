
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; sum < n; i++) {
        sum += i;
        if (sum == n) {
            cout << "YES";
            return 0; }}
    cout << "NO";
    return 0;
}
