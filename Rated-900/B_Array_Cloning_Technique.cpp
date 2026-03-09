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
        int n;
        cin>>n;
        map<ll,ll> mp;
        for(int i=0 ; i<n ;i++){
            ll x ;
            cin>>x;
            mp[x]++;
        }
        ll current_highest = 0;
        for(auto it:mp){
            current_highest = max(current_highest,it.second);
        }
        ll ops =0 ;
        while(current_highest < n){
            ops++;
            if(current_highest*2 <= n){
                ops += current_highest;
                current_highest *= 2;
            }
            else {
                ops += (n-current_highest);
                current_highest = n;
            }
        }
        cout<<ops<<endl;
    }
    return 0;
}