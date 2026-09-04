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
    // Write your solution for one test case here
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0 ; i<n ; i++) cin>>v[i];

    if(v[n-2]>v[n-1]){
        cout<<-1<<endl;
        return;
    }
    else if(v[n-1]>=0){
        cout<<n-2<<endl;
        for(int i=1 ; i<=n-2;i++) cout<<i<<" "<<n-1<<" "<<n<<endl;
    }
    else {
        if(is_sorted(v.begin(),v.end())) cout<<0<<endl;
        else cout<<-1<<endl;
    }
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