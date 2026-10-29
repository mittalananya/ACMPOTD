#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    for (int i = 0; i < n; i++) {
        int stars = abs(n / 2 - i);
        int diamonds = n - 2 * stars;
        for (int j = 0; j < stars; j++) {
            cout << '*';
        }
        for (int j = 0; j < diamonds; j++) {
            cout << 'D';
        }
        for (int j = 0; j < stars; j++) {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}