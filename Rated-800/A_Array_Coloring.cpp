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
        long long n ;
        cin>>n;
        long long oddCount  = 0;
        for(int i = 0 ; i<n ; i++){
            long long x;
            cin>>x;
            if((x%2)!=0) oddCount++;
        }
        if(oddCount %2 == 0)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}