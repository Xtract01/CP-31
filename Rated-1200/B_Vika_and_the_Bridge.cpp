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
    int n, k;
        cin >> n >> k;
 
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
            cin >> v[i];
 
        vector<int> colours[k + 1];
 
        for (int i = 1; i <= k; i++) 
        {
            colours[i].push_back(0);
        }
 
        for (int i = 0; i < n; i++) 
        {
            colours[v[i]].push_back(i + 1);
        }
 
        for (int i = 1; i <= k; i++) 
        {
            colours[i].push_back(n + 1);
        }
 
        priority_queue<int> jumps[k + 1];
 
        int ans = INT_MAX;
 
        for (int i = 1; i <= k; i++)
        {
            for (int j = 0; j < colours[i].size() - 1; j++)
            {
                jumps[i].push(colours[i][j + 1] - colours[i][j] - 1);
            } 
 
            int max_val = jumps[i].top();
 
            jumps[i].pop();
 
            if (max_val % 2 == 0)
            {
                jumps[i].push(max_val / 2);
                jumps[i].push((max_val / 2) - 1);
            }
            else
            {
                jumps[i].push(max_val / 2);
                jumps[i].push(max_val / 2);
            }
 
            ans = min(ans, jumps[i].top());
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