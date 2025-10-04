#include <iostream> 
#include <vector>
#include <unordered_map>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
	    long long n;
        cin>>n;
        vector<long long> v;
        for(int i = 0;i<n;i++){
            long long x;
            cin>>x;
            v.push_back(x);
        }
        unordered_map<long long , long long>mp;
        for(int i = 0;i<n;i++){
            mp[v[i]]++;
        }
        if(mp.size()>=3){
            cout<<"No"<<endl;
            continue;
        }
        if(mp.size()==1){
            cout<<"Yes"<<endl;
            continue;
        }
        long long diff = 0;
        for(auto el : mp){
            diff = abs(el.second-diff);
        }
        if(diff==0 || diff==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }
    return 0;
}