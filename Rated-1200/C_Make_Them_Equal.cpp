#include <bits/stdc++.h>
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

void solve() {
    // Write your solution for one test case here
    int n;
    cin>>n;
    char c;
    cin>>c;

    string s;
    cin>>s;

    bool check0 = true;
    for(int i=0 ; i<n ; i++){
        if(s[i]!=c){
            check0 = false;
            break;
        }
    }
    if(check0){
        cout<<"0"<<endl;
        return;
    }

    int val1 = -1;
    for(ll i=2 ; i<=n ; i++){
        bool isPass = true;
        for(ll j=i ; j<=n ; j+=i){
            if(s[j-1]!=c){
                isPass=false;
                break;
            }
        }
        if(isPass){
            val1 = i;
            break;
        }
    }
    if(val1!=-1){
        cout<<"1"<<endl;
        cout<<val1<<endl;
        return;
    }
    cout<<2<<endl;
    cout<<n-1<<" "<<n<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}