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
long long ceil_division(long long a, long long b) {
	return (a + b - 1) / b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
       ll x,y,k;
       cin>>x>>y>>k; 
       ll sticks_gained_per_trade = x - 1;
       ll sticks_needed = k * y + k - 1;
       ll trades = 0;
       trades += ceil_division(sticks_needed, sticks_gained_per_trade);
       trades += k;
       cout << trades << endl;
    }
    return 0;
}