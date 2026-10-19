
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int y;
    cin >> y;
 
    while (true) {
        y++;
        string s = to_string(y);
        set<char> digits;
        for (char c : s) {
            digits.insert(c);
        }
        if (digits.size() == 4) {
            cout << y;
            break;
        } }
    return 0;
}