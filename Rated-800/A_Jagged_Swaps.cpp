#include <iostream> 
#include <vector>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
	    int n;
        cin>>n;
        vector<int> v;
        for(int i = 0 ;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        if(v[0]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}