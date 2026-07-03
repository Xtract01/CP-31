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
        ll n , k;
        cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0 ; i<n ; i++) cin>>a[i]; 
        sort(a.begin(),a.end());
        vector<ll> preSum(n);
        preSum[0] = a[0];
        for(ll i=1 ; i<n ; i++){
            preSum[i] = a[i] + preSum[i-1];
        }
        ll ans = 0;
        for(ll first = 0 ; first<=k ; first++){
            ll second = k - first;
            ll left = 2*first;
            ll right = n - second - 1;
            ll sum = preSum[right] - (left==0 ?0 : preSum[left-1]);
            ans = max(ans,sum);
        }
        cout<<ans<<endl;

    }
    return 0;
}