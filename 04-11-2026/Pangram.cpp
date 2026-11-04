#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool letters[26] = {false};
    for (int i = 0; i < n; i++) {
        char c = tolower(s[i]);
        letters[c - 'a'] = true;
    }
    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (letters[i]) {
            count++;} }
    if (count == 26) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}