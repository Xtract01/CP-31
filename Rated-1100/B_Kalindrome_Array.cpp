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
bool check(vector<ll> &a, ll x){
    ll lo=0,hi=a.size()-1;
    while(lo<=hi){
        if(a[lo]==a[hi]) {
            lo++; hi--;
        }
        else if(a[lo]==x) lo++;
        else if(a[hi]==x) hi--;
        else return false;
    }
    return true;
}
void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0 ; i<n ; i++) cin>>a[i];
    ll lo = 0 , hi = n-1;
    bool used = false;
    while(lo < hi && a[lo] == a[hi]){
        lo++;
        hi--;
    }
    if(lo >= hi){
        cout << "YES\n";
        return;
    }
    if(check(a, a[lo]) || check(a, a[hi]))
        cout << "YES\n";
    else
        cout << "NO\n";
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