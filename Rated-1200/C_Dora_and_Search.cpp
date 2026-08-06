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
bool isMinOrMax(ll x, const set<ll>& st) {
    return x == *st.begin() || x == *st.rbegin();
}
void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n ;i++) cin>>a[i];
    set<ll> st(a.begin(),a.end());
    ll lo=0 , hi = n-1;
    while(lo<hi){
        if(isMinOrMax(a[lo],st)){
            st.erase(a[lo]);
            lo++;
            continue;
        }
        if(isMinOrMax(a[hi],st)){
            st.erase(a[hi]);
            hi--;
            continue;
        }
        break;
    }
    if(lo<hi){
        cout<<lo+1<<" "<<hi+1<<endl;
        return;
    }
    else cout<<-1<<endl;
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