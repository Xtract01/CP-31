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
       int n,q;
       cin>>n>>q;
       vector<int> arr(n);
       for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        if(i==0) arr[i] = x;
        else arr[i] = x + arr[i-1];
       }
       while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        int sum = arr[n-1];
        int rem = arr[r - 1] - (l > 1 ? arr[l - 2] : 0);;
        int add = k * (r-l+1);
        if((sum-rem+add)%2!=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       }
    }
    return 0;
}