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
    int n;
        cin>>n;
 
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin>>v[i]; //? O(n)
 
        if(v.size() == 1) {
            cout<<"1\n";
            return;
        }
 
        vector<int> ans;
        ans.push_back(v[0]);
        ans.push_back(v[1]);
 
        for(int i = 2; i < n; i++) { //? O(n)
            int currSize = ans.size();
 
            int x = ans[currSize - 2] - ans[currSize - 1];
            int y = ans[currSize - 1] - v[i]; 
 
            if(x > 0) {
                if(y > 0) ans[currSize - 1] = v[i];
                else if(y < 0) ans.push_back(v[i]);
            }
            else {
                if(y < 0) ans[currSize - 1] = v[i];
                else if(y > 0) ans.push_back(v[i]);
            }
        }
 
        int finalSize = ans.size();
        if(ans[0] == ans[1]) finalSize--;
 
        cout<<finalSize<<"\n";
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