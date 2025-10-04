#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
	    long long n , k;
        cin>>n>>k;
        vector<long long> v(n);
        for(int i =0 ;i<n;i++){
            cin>>v[i];
        }
        vector<long long> copy_v = v;
        sort(v.begin(),v.end());
        if(copy_v == v || k>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}