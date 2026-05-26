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
        ll n, r,b;
        cin>>n>>r>>b;
        string res = "";
        ll lengthOfRegion = floor(r/(b+1));
        ll extraRed = r%(b+1);
        for(ll times =1  ; times<=(b+1) ; times++){
            for(ll i=0 ; i<lengthOfRegion ; i++){
                res+='R';
            }
            if(extraRed>0){
                res+='R';
                extraRed--;
            }
            if(times!=b+1){
                res+='B';
            }
        }
        cout<<res<<endl;
    }
    return 0;
}