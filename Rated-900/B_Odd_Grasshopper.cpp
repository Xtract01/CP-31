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
        ll x,n;
        cin>>x>>n;
       ll final_pos;
       if(n%4==1) final_pos = -1*n;
       else if(n%4 == 2) final_pos = 1;
       else if (n%4==3) final_pos =n+ 1;
       else if(n%4==0) final_pos = 0;

       if(x%2==0) final_pos = x+final_pos;
       else final_pos = x-final_pos;

        cout<<final_pos<<endl;

    }
    return 0;
}