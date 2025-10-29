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
        ll n , k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        for(char &ch : s){
            mp[ch]++;
        }
        ll number_of_odd_occurences = 0;
        for(auto &it : mp){
            if(it.second%2 == 1) number_of_odd_occurences++;
        }
        if(number_of_odd_occurences > k+1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}