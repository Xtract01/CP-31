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
    // Write your solution for one test case here
    ll n , q;
    cin >> n >> q;
    vector<ll> first_pos(51,n+1);
    for(ll i=1 ; i<=n ; i++){
        ll color;
        cin>>color;
        if(first_pos[color]==n+1) first_pos[color] = i;
    }
    while(q--){
        ll color ;
        cin>>color;
        ll ans = first_pos[color];
        for(ll i=1 ; i<=50 ; i++){
            if(first_pos[i]<ans) first_pos[i]++;
        }
        first_pos[color] = 1;
        cout<<ans<<" ";
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}