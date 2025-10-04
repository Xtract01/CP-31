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
	    int n , k;
        cin>>n>>k;
        bool flag = false;
        vector<int> arr(n);
        for(int i = 0; i<n ;i++){
            cin>>arr[i];
            if(arr[i]==k) flag = true;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}