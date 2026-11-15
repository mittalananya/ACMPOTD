#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i]; }
    sort(a, a + 4);
    bool segment = false;
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            for (int k = j + 1; k < 4; k++) {
                if (a[i] + a[j] > a[k]) {
                    cout << "TRIANGLE" << endl;
                    return 0; }
                else if (a[i] + a[j] == a[k]) {
                    segment = true; }
            }
        }
    }
    if (segment) {
        cout << "SEGMENT" << endl; }
    else {
        cout << "IMPOSSIBLE" << endl; }
    return 0;
}