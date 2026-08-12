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
   int n;
      cin >> n;
 
      vector<int> v(n);
 
      for (int i = 0; i < n; i++)
         cin >> v[i]; 
 
      map<int, int> cnt;
 
      for (int i = 0; i < n; i++)
         cnt[v[i]]++; 
 
      int ans = 0; //! x
 
      for (auto &el : cnt) 
      {
         ans += max(0, cnt[el.first] - cnt[el.first - 1]);
      }
      cout << ans << "\n";
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