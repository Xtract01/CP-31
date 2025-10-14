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
        long long n;
        cin>>n;
        long long a[n];
        for(long long i = 0; i<n ; i++){
            cin>>a[i];
        }
        long long total_number_of_twos = 0;
        long long current_number_of_twos = 0;
        for(long long i = 0; i<n ; i++){
            if(a[i]==2) total_number_of_twos++;
        }
        long long ans = -1;
        for(long long i =0 ; i<n ; i++){
            if(a[i]==2) current_number_of_twos++;
            if(current_number_of_twos == total_number_of_twos - current_number_of_twos){
                ans = i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}