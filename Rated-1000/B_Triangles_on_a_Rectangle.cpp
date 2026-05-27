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
        long long w, h;
		cin >> w >> h;
		long long area = INT_MIN;
        for (int i = 0; i < 4; i++) 
		{
			long long k;
			cin >> k; 
			long long first, last;

			for (int j = 0; j < k; j++) 
			{
				long long x;
				cin >> x; 
				if (j == 0)
					first = x; 
				if (j == k - 1)
					last = x; 
			}

			long long base = last - first; 
			long long height;
			if (i <= 1)
				height = h; 
			else
				height = w; 
			
			area = max(area, base * height); 
		}
		cout << area << endl; 
    }
    return 0;
}