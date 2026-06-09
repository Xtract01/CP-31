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
ll next_prime(ll n){
    for(ll i=n ;;i++){
        bool isPrime=true;
        for(ll j=2 ; j*j<=i ; j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime) return i;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        ll p = next_prime(n+1);
        ll q = next_prime(p+n);

        ll a = min(1LL*p*p*p,1LL *p*q);
        cout<<a<<endl;

    }
    return 0;
}