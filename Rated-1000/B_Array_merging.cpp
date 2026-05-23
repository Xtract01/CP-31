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
        ll n;
        cin>>n;
        vector<ll> a(n) , b(n);
        for(ll i=0 ; i<n ; i++){
            cin>>a[i];
        }
        for(ll i=0 ; i<n ; i++){
            cin>>b[i];
        }
        vector<ll> x(2*n+1,0),y(2*n+1,0);
        ll cntr = 1;
        for(ll i = 1; i<n ; i++){
            if(a[i]==a[i-1]) cntr++;
            else {
                x[a[i-1]] = max(x[a[i-1]],cntr);
                cntr = 1;
            }
        }
        x[a[n - 1]] = max(x[a[n - 1]], cntr);
        cntr = 1;
        for(ll i = 1; i<n ; i++){
            if(b[i]==b[i-1]) cntr++;
            else {
                y[b[i-1]] = max(y[b[i-1]],cntr);
                cntr = 1;
            }
        }
        y[b[n - 1]] = max(y[b[n - 1]], cntr);
        ll res = 0 ;
        for(ll i = 0 ; i<=2*n ; i++){
            res = max(res,x[i]+y[i]);
        }
       
        cout<<res<<endl;
    }
    return 0;
}