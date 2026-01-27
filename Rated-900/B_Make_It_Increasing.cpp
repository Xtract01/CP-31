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
        vector<int> arr(n);
        for(int i=0 ; i<n; i++){
            cin>>arr[i];
        }
        ll ans = 0;
        for(int i=n-2 ; i>=0 ; i-- ){
            while(arr[i]>=arr[i+1]){
                ans++;
                arr[i]/=2;
                if(arr[i]==0) break;
            }
            if(arr[i]==0 && arr[i+1]==0){
                ans = -1;
                break;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}