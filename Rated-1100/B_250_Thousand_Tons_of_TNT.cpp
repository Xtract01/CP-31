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
        int n;
        cin>>n;
        vector<ll>v(n);
        for(auto &it:v)cin>>it;//n
        vector<ll>pre(n);
        pre[0]=v[0];
        for(ll i=1;i<n;i++){//n
            pre[i]=v[i]+pre[i-1];
        }
        ll ans=0;
        for(ll k=1;k<=n;k++){
            if(n%k)continue;
            ll start=k-1;
            ll res=0;
            ll maxi=pre[start];
            ll mini=pre[start];
            for(ll idx=start+k;idx<n;idx+=k){
                ll curr=pre[idx]-pre[idx-k];
                maxi=max(maxi,curr);
                mini=min(mini,curr);
            }
            ans=max(ans,maxi-mini);
        }
        cout<<ans<<endl;
    }
    return 0;
}