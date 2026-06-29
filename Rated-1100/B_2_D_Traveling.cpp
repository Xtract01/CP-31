#include <bits/stdc++.h> // Includes almost all standard headers
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int d;
    cin >> d;
    while (d--) {
        ll n, k, s,t;
        cin>>n>>k>>s>>t;
        vector<ll> x(n+1) , y(n+1);
        for(ll i=1 ; i<=n ;i++){
            cin>>x[i]>>y[i];
        }
        ll ans = abs(x[s] - x[t]) + abs(y[s]-y[t]);
        ll mins = 1e17 , mint=1e17;
        for (ll i = 1; i <= k; i++) {
            mins = min(mins, abs(x[s] - x[i]) + abs(y[s] - y[i]));
            mint = min(mint, abs(x[t] - x[i]) + abs(y[t] - y[i]));
        }
        ans = min(ans,mins+mint);
        cout<<ans<<endl;
    }
    return 0;
}