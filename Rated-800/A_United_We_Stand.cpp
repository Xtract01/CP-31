#include <iostream> 
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<climits>
#include<unordered_set>
#include<set>
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
        vector<long long> a(n);
        for(int i=0 ;i<n;i++){
            cin>>a[i];
        }
        vector<long long> b,c;
        long long mx = *max_element(a.begin(),a.end());
        for(int i = 0;i<n;i++){
            if(a[i]!=mx) b.push_back(a[i]);
            else c.push_back(a[i]);
        }
        if(b.size()==0) cout<<-1<<endl;
        else {
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto it: b){
                cout<<it<<" ";
            }
            cout<<endl;
            for(auto it:c ){
                cout<<it<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}