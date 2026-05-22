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
       ll n , k , q;
       cin>>n>>k>>q;
       vector<ll> a(n);
        for(int i=0 ; i<n ;i++){
            ll x;
            cin>>x;
            if(x<=q) a[i] = 1;
            else a[i] = 0;
        }
        ll cnt = 0;
        ll res = 0;
        for(int i=0 ; i<n ; i++){
            if(a[i]==1) cnt++;
            else {
               if (cnt >= k) res += ((cnt - k + 1) * (cnt - k + 2)) / 2;
                cnt = 0;
            }
        }
        if (cnt >= k)
            res += ((cnt - k + 1) * (cnt - k + 2)) / 2;
        cout<<res<<endl;

       
    }
    return 0;
}