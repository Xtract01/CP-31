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
        vector<ll> arr(n);
        for(ll i =0 ; i<n ; i++) cin>> arr[i];
        vector<pair<ll,ll>> building_map;
        for(ll i=0 ; i<n ; i++){
            building_map.push_back({arr[i],i});
        }
        sort(building_map.rbegin(),building_map.rend());
        vector<ll> ans(n+1,0);
        ans[0] = 0;
        ll minutes = 0;
        ll coordinate = 1;
        for(ll i=0 ; i<n ;i++){
            ans[building_map[i].second+1] = coordinate;
            minutes += (2 * abs(coordinate) * building_map[i].first);
            if (coordinate < 0)
				coordinate = abs(coordinate) + 1;
			else
				coordinate = -coordinate;
        }
        cout << minutes << endl;
        for (auto it : ans)
			cout << it << " ";
		cout << endl;
    }
    return 0;
}