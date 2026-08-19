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
 
      vector<int> x(n), y(n);
 
      for (int i = 0; i < n; i++)
         cin >> x[i]; 
 
      for (int i = 0; i < n; i++)
         cin >> y[i]; 
 
      multiset<int> ms;
 
      for (int i = 0; i < n; i++) 
        ms.insert(y[i] - x[i]); 
      int ans = 0;
 
      while (ms.size() > 1)
      {
         int val1 = *ms.begin();
         ms.erase(ms.begin()); 
 
         auto it = ms.lower_bound(-val1); 
       
 
         if (it == ms.end())
            continue;
 
         ans++;
         ms.erase(it); 
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