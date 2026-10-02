#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> flag(n);

    for (int i = 0; i < n; i++) {
        cin >> flag[i];
    }

    for (int i = 0; i < n; i++) {

        // Checking if the entire row is having the same colour
        for (int j = 1; j < m; j++) {
            if (flag[i][j] != flag[i][0]) {
                cout << "NO";
                return 0;
            }
        }

        // Checking if adjacent rows are having dif colours
        if (i > 0 && flag[i][0] == flag[i - 1][0]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}