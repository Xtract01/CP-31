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
        ll n , k ;
        cin>>n>>k;
        vector<ll> a(n);
        ll even_c = 0,ans = INF;
        for(ll i=0 ; i<n ; i++){
            cin>>a[i];
            if(a[i]%2==0) even_c++;
        }
       if(k == 4){

            ll make4 = INF;

            for(ll i = 0; i < n; i++){
                make4 = min(make4, (4 - a[i] % 4) % 4);
            }

            ll make_even;

            if(even_c >= 2) make_even = 0;
            else if(even_c == 1) make_even = 1;
            else make_even = 2;

            ans = min(make4, make_even);
        }
        else {
            for(ll i=0 ; i<n ; i++){
                if(a[i]%k==0) ans = 0;
               ans = min(ans, (k - a[i] % k) % k);
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}