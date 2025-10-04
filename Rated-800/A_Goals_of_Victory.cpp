
#include <iostream> 
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
        long long a[n];
        for(long long i = 0 ; i< n-1 ;i++){
            cin>>a[i];
        }
        long long sum = 0;
        for(long long i = 0 ; i< n-1 ;i++){
            sum+=a[i];
        }
        cout<<-1 * sum<<endl;

    }
    return 0;
}