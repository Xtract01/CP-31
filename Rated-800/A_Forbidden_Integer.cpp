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
        long long n , k , x;
        cin>>n>>k>>x;
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i = 1 ;i <=n ; i++) cout<< 1 <<" ";
            cout<<endl;
        } 
        else{
            if(k==1 || (k==2 && n%2==1)) cout<<"NO"<<endl;
            else {
                cout<<"YES"<<endl;
                if(n%2==0){
                    cout<<n/2<<endl;
                    for(int i = 1 ;i<=n/2;i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }
                else{
                    cout<<(n-3)/2 + 1 <<endl;
                    for(int i = 1; i<= (n-3)/2;i++) cout<<2<<" ";
                    cout<<3<<endl;
                }
            }
        }
    }
    return 0;
}