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
        vector<ll> v(n);
        for(ll i=0 ; i<n ; i++){
            cin>>v[i];
        }
        ll answer = v[n-1] - v[0];
        for(int i=1 ; i< n ; i++){
            answer = max(answer,v[i]-v[0]);
        }
        for(int i=0 ; i< n-1 ; i++){
            answer = max(answer,v[n-1]-v[i]);
        }
        for(int i=0 ; i< n-1 ; i++){
            answer = max(answer,v[i]-v[i+1]);
        }
        cout<<answer<<endl;
    }
    return 0;
}