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
        ll n,k;
        cin>>n>>k;
        vector<vector<ll>> grid(n,vector<ll>(n));
        for(ll i=0 ; i<n ; i++){
            for(ll j=0;j<n;j++) cin>>grid[i][j];
        }
        vector<vector<ll>> gridRotated(n,vector<ll>(n));
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                gridRotated[n - 1 - i][n - 1 - j] = grid[i][j];
            }
        }
        ll cnt = 0;
        for(ll i=0 ; i<n ; i++){
            for(ll j=0 ; j<n ; j++){
                if(grid[i][j]!=gridRotated[i][j]) cnt++;
            }
        } 
        ll need = cnt / 2;
        if (need > k)
            cout << "NO\n";
        else if (n % 2 == 1)
            cout << "YES\n";
        else
            cout << ((k - need) % 2 == 0 ? "YES\n" : "NO\n");
       
    }
    return 0;
}