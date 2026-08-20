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
    int n,m;
    cin>>n>>m;

    vector<int> a(m);
    for(int i=0; i<m ; i++){
        cin>>a[i];    
    }
    sort(a.begin(),a.end());
    vector<int> gaps;
    for(int i=0 ; i<m-1 ; i++){
        gaps.push_back(a[i+1]-a[i]-1);
    }
    gaps.push_back(a[0] + n - a[m-1] -1);
    sort(gaps.rbegin(),gaps.rend());

    int numSaved = 0 , numDays = 0;
    for(auto gap: gaps){
        int currGap = gap - numDays * 2;
        if(currGap>0){
            numSaved++;
            currGap -=2;
            if(currGap>0) numSaved += currGap;
            numDays+=2;
        }
    }
    cout<< ( n  - numSaved) <<'\n'; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--) {
        solve();
    }

    return 0;
}