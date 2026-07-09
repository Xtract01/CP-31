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
vector<ll> findMax3(vector<ll> vec){
    vector<pair<int,int>> temp(vec.size());
    for(int i=0 ; i<vec.size();i++){
        temp[i].first = vec[i];
        temp[i].second = i;
    }
    sort(temp.rbegin(),temp.rend());
    vector<ll> ans(3);
    for(int i= 0 ; i<3 ; i++) ans[i] = temp[i].second;
    return ans;
}
void solve() {
    // Write your solution for one test case here
    ll n;
    cin>>n;
    vector<ll> a(n),b(n),c(n);
    for(ll i=0 ; i<n ; i++) cin>>a[i];
    for(ll i=0 ; i<n;i++) cin>>b[i];
    for(ll i=0 ; i<n ; i++) cin>>c[i];

    vector<ll>maxA =  findMax3(a);
    vector<ll>maxB =  findMax3(b);
    vector<ll>maxC =  findMax3(c);

    ll res = INT_MIN;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ;j++){
            for(int k=0 ; k<3 ; k++){
                ll x= maxA[i] , y = maxB[j] , z = maxC[k];
                if((x==y)||(y==z)||(z==x)) continue;
                res = max(res,a[x]+b[y]+c[z]);
            }
        }
    }
    cout<<res<<endl;

    
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