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
ll xor_till (ll n){
    ll a = n%4;
    if(a==0) return n;
    if(a==1) return 1;
    if(a==2) return n+1;
    else return 0;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll a , b;
        cin>>a>>b;
        ll arr_xor = xor_till(a-1);

        if(arr_xor==b) cout<<a<<endl;
        else if((arr_xor ^ b)!=a) cout<<a+1<<endl;
        else cout<<a+2<<endl;
    }
    return 0;
}