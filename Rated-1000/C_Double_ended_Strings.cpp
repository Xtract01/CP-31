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
ll solve(string &a , string &b){
    int n = a.length();
    int m = b.length();
    vector<vector<ll>> dp(n+1,vector<ll>(m+1,0));
    for(int j=0 ; j<=m;j++) dp[0][j] = 0;
    for(int i=0 ; i<=n;i++) dp[i][0] = 0;
    ll ans = 0;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=m ; j++){
            if(a[i-1] == b[j-1]) {
                dp[i][j] = 1 + dp[i-1][j-1];
                ans = max(ans,dp[i][j]);
            }
            else dp[i][j] = 0;
        }
    }
    return ans;
}      
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        // Solve each test case here
        string a , b;
        cin>>a;
        cin>>b;
        ll LCS = solve(a,b);
        cout<<(a.length()-LCS)+(b.length()-LCS)<<endl;
    }
    return 0;
}