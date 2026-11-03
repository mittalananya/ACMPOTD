#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int height = 0;
    int level = 1;
    while (n >= level) {
        n -= level;
        height++;
        level += height + 1;
    }
    cout << height << endl;
    return 0;
}