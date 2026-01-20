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
int gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
       int n;
       cin>>n;
       vector<int> a(n);
       for(int i=0 ; i<n ; i++){
        cin>>a[i];
       }
       int k = abs(a[0]-1);
       for(int i=1 ;i<n ;i++){
        k = gcd(k,abs(a[i]-(i+1)));
       }
       cout<<k<<endl;

    }
    return 0;
}