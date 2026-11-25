#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        long long a, b;
        cin >> a >> b;

        int count = 0;

        while (a > 0 && b > 0) {
            if (a < b)
                swap(a, b);

            count += (a - 1) / b;

            if (a % b == 0) {
                count++;
                break;
            }

            a %= b;
        }

        cout << count << endl;
    }

    return 0;
}
