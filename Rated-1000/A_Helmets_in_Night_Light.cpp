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

    int t;
    cin >> t;
    while (t--) {
        // Solve each test case here
        ll n , p;
        cin>>n>>p;
        vector<ll> a(n);
        vector<pair<ll,ll>> pairs(n);
        for(int i=0 ; i<n ; i++) cin>>a[i];
        for(int i=0 ; i<n ; i++){
            ll x;
            cin>>x;
            pairs[i] = {x,a[i]};
        }
        sort(pairs.begin(),pairs.end());
        ll ans = p;
        ll cnt = 1;
        for(auto &pr : pairs){
            ll bi = pr.first;
            ll ai = pr.second;
            if(cnt>=n||bi>=p) break;

            ll use = min(ai,n-cnt);
            ans += use*bi;
            cnt+=use;
        }
        ans+=(n-cnt)*p;
        cout<<ans<<endl;
    }
    return 0;
}