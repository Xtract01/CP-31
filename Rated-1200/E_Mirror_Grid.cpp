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

void solve() {
    int n ;
    cin>>n;
    vector<vector<char>> mat(n,vector<char>(n));
    for(int i=0 ; i<n ; i++){
        for(int j=0 ;j<n ; j++) cin>>mat[i][j];
    }
    int ans = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            int c0 = 0, c1 = 0;
            if(mat[i][j]=='0') c0++;
            else c1++;
            if(mat[j][n-i-1]=='0')c0++;
            else c1++;
            if(mat[n-i-1][n-j-1]=='0') c0++;
            else c1++;
            if(mat[n-j-1][i]=='0') c0++;
            else c1++;
            if(c0==0 || c1==0) continue;
            if(c0>=c1){
                ans+=c1;
                mat[i][j]='0';;
                mat[j][n-i-1]='0';
                mat[n-i-1][n-j-1]='0';
                mat[n-j-1][i]='0';
            }
            else {
                ans += c0;
                mat[i][j]='1';
                mat[j][n-i-1]='1';
                mat[n-i-1][n-j-1]='1';
                mat[n-j-1][i]='1';
            }
        }
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