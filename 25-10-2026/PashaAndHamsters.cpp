#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> arthur(a), alexander(b);
    for (int i = 0; i < a; i++)
        cin >> arthur[i];
    for (int i = 0; i < b; i++)
        cin >> alexander[i];
    vector<int> ans(n + 1, 2);
    for (int apple : arthur)
        ans[apple] = 1;
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    return 0;
}