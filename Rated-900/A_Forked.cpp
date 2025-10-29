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
        int a , b;
        cin>>a>>b;
        int kx,ky;
        cin>>kx>>ky;
        int qx,qy;
        cin>>qx>>qy;
        vector<vector<int>> dir = {{-1*b,a},{b,a},{a,b},{a,-1*b},{-1*a,b},{-1*a,-1*b},{-1*b,-1*a},{b,-1*a}};
        int ans=0;
        set<pair<int,int>> kDir;
        for(vector<int> &vec : dir){
            int new_kx = kx + vec[0];
            int new_ky = ky + vec[1];
            kDir.insert({new_kx,new_ky});
        }
        set<pair<int,int>> qDir_counted;
        for(vector<int> &vec : dir){
            int new_qx = qx + vec[0];
            int new_qy = qy + vec[1];
           pair<int, int> q_pos = {new_qx, new_qy};
           if(kDir.count(q_pos) && qDir_counted.find(q_pos) == qDir_counted.end()){
                ans++;
                qDir_counted.insert(q_pos); 
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}