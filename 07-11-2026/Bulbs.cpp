#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    bool bulbs[101] = {false};
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++) {
            int a;
            cin >> a;
            bulbs[a] = true;}}
    for (int i = 1; i <= m; i++) {
        if (!bulbs[i]) {
            cout << "NO" << endl;
            return 0;}}
    cout << "YES" << endl;
    return 0;
}