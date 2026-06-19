
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
        ll a , b;
        cin>>a>>b;
        long long ra = a;
        long long rb = b;
        while(ra %2==0){
            ra/=2;
        }
        while(rb %2==0){
            rb/=2;
        }
        if(ra!=rb) cout<<-1<<endl;
        else {
            a/=ra;
            b/=rb;
            a=log2(a);
            b = log2(b);
            ll ans = ceil(abs(a-b)/3.0);
            cout<<ans<<endl;
        }
    }
    return 0;
}