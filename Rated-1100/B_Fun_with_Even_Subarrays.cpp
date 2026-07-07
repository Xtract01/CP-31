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
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0 ; i<n ; i++) cin>>a[i];
    ll ans = 0;
    ll i = n-1;
    while(i>=0 && a[i]==a[n-1]) i--;
    if(i==-1){
        cout<<0<<endl;
        return;
    }
    while(i>=0){
        i-=(n-i-1);
        ans++;
        while(i>=0 && a[i]==a[n-1]) i--;
    }
    cout<<ans<<endl;

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