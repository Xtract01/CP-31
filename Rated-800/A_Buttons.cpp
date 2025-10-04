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
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2!=0){
            if(a<b) cout <<"Second"<<endl;
            else cout<<"First"<<endl;
        }
        else{
            if(a>b) cout <<"First"<<endl; 
            else cout<<"Second"<<endl;
        }

    }
    return 0;
}