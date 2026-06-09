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
        ll a,b;
        cin>>a>>b;
        ll ans = LLONG_MAX;
        for(ll add=0 ; add <=31 ; add++){
            ll op =add;
            ll new_b = b+add;
            if(new_b == 1) continue;
            ll copy_a = a;
            while(copy_a>0){
                copy_a/=new_b;
                op++;
            }
            ans = min(ans,op);
        }
        cout<<ans<<endl;
    }
    return 0;
}