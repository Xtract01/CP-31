
#include<bits/stdc++.h> 
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
	    long long n , x;
        cin>>n>>x;
        vector<long long> v;
        long long result = INT_MIN;
        v.push_back(0);
        
        for(int i=0 ;i<n;i++){
            int points;
            cin>>points;
            v.push_back(points);
        }
        v.push_back(x);
        n = v.size();
        for(int i=1;i<n ;i++){
            if(i==n-1)  result = max(result , 2* (v[i]-v[i-1]));
            else result = max(result , v[i]-v[i-1]);
        }
       
        cout << result <<endl;
    }
    return 0;
}