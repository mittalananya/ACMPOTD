#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
 
    int pos = 0;
 
    while (pos < n - 1) {
        bool found = false;
        for (int j = min(n - 1, pos + k); j > pos; j--) {
            if (s[j] == '.') {
                pos = j;
                found = true;
                break; }
        }
        if (!found) {
            cout << "NO" << endl;
            return 0; }
    }
 
    cout << "YES" << endl;
    return 0;
}