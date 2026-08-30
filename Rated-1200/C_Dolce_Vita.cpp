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
bool pf(long long val, int ind, int x, int mid)
{
    if (val + (1LL * (ind + 1) * (mid - 1)) <= x)
        return true;
    return false;
}
 
int binSearch(long long val, int ind, int x)
{
    int low = 1, high = 1e9 + 5;
    int ans = 0;
 
    while (low <= high)
    {
        int mid = (low + high) / 2;
 
        if (pf(val, ind, x, mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    } 
 
    return ans;
} 
 
void solve() {
    // Write your solution for one test case here
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0 ;i<n ; i++) cin>>a[i];
    sort(a.begin(),a.end());
    vector<ll> preSum(n);

    preSum[0] = a[0];
    for(int i=1 ; i<n ; i++) preSum[i] = preSum[i-1] + a[i];

    ll ans = 0;
    for(int i=0 ; i<n ; i++){
        ans+=binSearch(preSum[i],i,x);
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