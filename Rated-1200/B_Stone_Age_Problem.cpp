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
    int n , q;
    cin>>n>>q;
    vector<pair<int,int>> v(n,{0,0});
    for(int i=0 ; i<n ; i++) cin>>v[i].first;
    pair<int,int> globalVal = {0,-1};

    ll sum = 0;
    for(int i=0 ; i<n ; i++) sum+=v[i].first;
    for(int it = 1 ; it<=q ; it++){
        int x ;
        cin>>x;

        if(x==1){
            int ind,val;
            cin>>ind>>val;
            ind--;
            if(v[ind].second>globalVal.second){
                sum+=(val-v[ind].first);
            }
            else sum+=(val-globalVal.first);
            v[ind].first = val;
            v[ind].second = it;
        }
        else {
            int val;
            cin>>val;
            globalVal.first=val;
            globalVal.second = it;
            sum = (long long) (val)*n;
        }
        cout<<sum<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}