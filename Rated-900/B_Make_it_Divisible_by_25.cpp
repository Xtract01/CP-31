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
int solve(string s , string possibleValue){
    int ops = 0;
    int checkerIdx = possibleValue.length() - 1;
    for(int i=s.length()-1 ; i>=0 ; i--){
        if(s[i]==possibleValue[checkerIdx]){
            checkerIdx--;
            if(checkerIdx<0)break;
        }
        else ops++;
    }
    if (checkerIdx >= 0) ops = INT_MAX;
    return ops;
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        vector<string>possibleVlaues = {"00","25","50","75"};
        int ans = INT_MAX;
        for(auto possibleValue:possibleVlaues){
            ans = min(ans,solve(s,possibleValue));
        }
        cout<<ans<<endl;
    }
    return 0;
}