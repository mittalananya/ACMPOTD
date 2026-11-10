#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[101], sum = 0;
    bool used[101] = {false};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i]; }
    int target = sum / (n / 2);
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            for (int j = i + 1; j <= n; j++) {
                if (!used[j] && a[i] + a[j] == target) {
                    cout << i << " " << j << endl;
                    used[i] = true;
                    used[j] = true;
                    break; } } } }
    return 0;
}