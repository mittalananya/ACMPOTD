#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    int dx[] = {0, 0, 0, 1, -1};
    int dy[] = {0, 1, -1, 0, 0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int presses = 0;

            for (int d = 0; d < 5; d++) {
                int x = i + dx[d];
                int y = j + dy[d];

                if (x >= 0 && x < 3 && y >= 0 && y < 3) {
                    presses += a[x][y];
                }
            }

            cout << (presses % 2 == 0 ? 1 : 0);
        }
        cout << endl;
    }

    return 0;
}