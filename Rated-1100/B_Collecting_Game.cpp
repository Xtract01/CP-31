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
        ll a;
        vector<pair<ll,ll>>v;
        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back({a,i});
        }
        vector<ll>pre(n);
        sort(v.begin(),v.end());
        pre[0]=v[0].first;
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+v[i].first;
        }
        vector<ll>ans(n);
        for(int i=0;i<n;i++){
            int j=i;
            int found=i;
            while(j<n){
                pair<ll,ll>temp={pre[j]+1,INT_MIN};
                ll idx=lower_bound(v.begin(),v.end(),temp)-v.begin();
                idx--;
                if(idx==j){
                    break;
                }
                found+=idx-j;
                j=idx;
            }
            ans[v[i].second]=found;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}