#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {

        ll n;
        cin >> n;

        ll d = -1;


        for (ll i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                d = i;
                break;
            }
        }

  
        if (d == -1) {
            cout << 1 << " " << n - 1 << '\n';
        }
        else {
            ll a = n / d;
            ll b = n - a;

            cout << a << " " << b << '\n';
        }
    }

    return 0;
}