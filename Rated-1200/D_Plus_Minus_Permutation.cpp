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
ll lcm(ll num1 , ll num2){
    return (num1*num2)/(__gcd(num1,num2));
}
ll calculateSum(ll start , ll end){
    ll sum = ((start+end)*(end-start+1))/2;
    return sum;
}
void solve() {
    // Write your solution for one test case here
    ll n,x,y;
    cin>>n>>x>>y;

    ll cnt1 = (n/x) - (n/lcm(x,y));
    ll cnt2 = (n/y) - (n/lcm(x,y));

    ll ans = calculateSum(n-cnt1+1,n) - calculateSum(1,cnt2);
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