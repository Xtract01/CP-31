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
        string s ,t;
        cin>>s>>t;
        int n = s.length();
        int m = t.length();   
        vector<int> freq(26,0);
        for(int i= 0 ; i<m ; i++){
            freq[t[i]-'A']++;
        }
        for(int i=n-1 ; i>=0 ; i--){
            if(freq[s[i]-'A']>0) freq[s[i]-'A']--;
            else s[i] = '.';
        }
        string finalString ="";
        for(int i=0 ;i<n ; i++){
            if(s[i]!='.') finalString+=s[i];
        }
        if(finalString == t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}