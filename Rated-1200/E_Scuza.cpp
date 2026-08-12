#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int,int>
#define pll pair<ll,ll>

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'

const ll INF = LLONG_MAX;
const int INF_INT = INT_MAX;
const ll NEG_INF = LLONG_MIN;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);

void solve() {
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n);
    vector<ll> preSum(n);
    vector<ll> preMax(n);

    for (ll i = 0; i < n; i++) {
        cin >> a[i];

        if (i == 0) {
            preSum[i] = a[i];
            preMax[i] = a[i];
        } else {
            preSum[i] = preSum[i - 1] + a[i];
            preMax[i] = max(preMax[i - 1], a[i]);
        }
    }

    while (q--) {
        ll k;
        cin >> k;

        ll j = upper_bound(preMax.begin(), preMax.end(), k)
               - preMax.begin();

        if (j == 0)
            cout << 0 << " ";
        else
            cout << preSum[j - 1] << " ";
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}