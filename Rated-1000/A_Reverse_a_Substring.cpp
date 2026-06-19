#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool found = false;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] > s[i + 1]) {
                cout << "YES\n";
                cout << i + 1 << " " << i + 2 << "\n"; // 1-based indices
                found = true;
                break;
            }
        }
        if (!found) cout << "NO\n";

    return 0;
}
