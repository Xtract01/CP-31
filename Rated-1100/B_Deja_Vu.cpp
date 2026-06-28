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
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n);
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        vector<ll> x(q);
        for(int i=0 ; i<q ; i++) cin>>x[i];
        ll prev = 31;
        for(int i=0;i<q;i++){
            if(x[i]>=prev) continue;
            ll val = pow(2,x[i]);
            for(int j=0 ; j<n ; j++){
                if(a[j]%val==0) a[j]+=(val/2);
            }
            prev = x[i];
        }
        for(int i=0 ;i<n ; i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}