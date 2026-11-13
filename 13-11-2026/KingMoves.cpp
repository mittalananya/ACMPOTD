#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int c = s[0] - 'a' + 1;
    int r = s[1] - '0';
    int x = 0, y = 0;
    if (c > 1) x++;
    if (c < 8) x++;
    if (r > 1) y++;
    if (r < 8) y++;
    cout << (x + 1) * (y + 1) - 1 << endl;
    return 0;
}