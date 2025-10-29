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
bool check(long long x){
    long long count_of_digits = 0;
    long long count_of_zeroes = 0;
    while(x){
        if(x%10==0) count_of_zeroes++;
        count_of_digits++;
        x/=10;
    }
    return count_of_zeroes == count_of_digits - 1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll> round_numbers;
    for(ll i = 1; i<= 999999 ; i++){
        if(check(i)) round_numbers.push_back(i);
    }
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        long long answer = 0;
        for(int i=0 ; i<round_numbers.size();i++){
            if(round_numbers[i]<=n) answer++;
            else break;
        }
        cout<<answer<<endl;
    }
    return 0;
}