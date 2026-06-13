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
       ll n,m;
       cin>>n>>m;
       vector<vector<ll>> a(n,vector<ll>(m));
       for(ll i=0 ; i<n ; i++){
        for(ll j =0 ; j< m ; j++){
            cin>>a[i][j];
        }
       }
       ll negative = 0 , mini = INT_MAX , sum = 0;
       for(ll i=0 ; i<n ; i++){
        for(ll j=0 ; j<m ; j++){
            if(a[i][j]<0) negative++;
            mini = min(mini,abs(a[i][j]));
            sum+=abs(a[i][j]);
        }
       }
       if(negative%2==0){
        cout<<sum<<endl;
       }
       else {
        cout<<sum-2*mini<<endl;
       }
    }
    return 0;
}