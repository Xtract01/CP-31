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
        // Solve each test case here
        ll n;
        cin>>n;
        vector<vector<int>> a(n);
        for(ll i=0 ; i<n ; i++){
            ll m ;
            cin>>m;
            vector<int> ai(m);
            for(int j=0 ; j<m ; j++){
                cin>>ai[j];
            }
            sort(ai.begin(),ai.end());
            a[i] = ai;
        }
        ll sumSecond = 0;
        ll minFirst = LLONG_MAX;
        ll minSecond = LLONG_MAX;
        for(int i=0 ; i<n ; i++){
            minFirst = min(minFirst,(ll)a[i][0]);
            minSecond = min(minSecond,(ll)a[i][1]);
            sumSecond+=a[i][1];
        }
        ll answer = sumSecond-minSecond+minFirst;
        cout<<answer<<endl;

    }
    return 0;
}