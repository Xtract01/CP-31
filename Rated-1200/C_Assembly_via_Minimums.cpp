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

        int n;
        cin>>n;
 
        int m = (n * (n - 1)) / 2;
 
        vector<int> v(m); //! array b
        for(int i = 0; i < m; i++) cin>>v[i]; //? O(m)
 
        sort(v.begin(), v.end()); //? O(m log m)
 
        int x = n-1, i = 0;
 
        while(x > 0) {
            cout<<v[i]<<" ";
 
            i += x;
            x--;
        } 
 
        cout<<"1000000000\n";
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