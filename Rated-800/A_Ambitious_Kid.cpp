#include <iostream> 
#include <climits>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int res = INT_MAX;
    int n ;
    cin>>n;
    for(int i = 0; i<n ; i++){
        int x;
        cin>>x;
        res=min(res,abs(x));
    }
    cout<<res<<endl;

    
    return 0;
}