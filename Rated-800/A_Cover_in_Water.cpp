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
	    int n ;
        cin>>n;
        string s;
        cin>>s;
        int consec_dot = 0;
        int dot_count = 0;
        bool flag = false;
        for(int i = 0 ;i<n ;i++){
            if(consec_dot>=3) {
                flag = true;
                break;
            }
            if(s[i] == '.'){
                consec_dot++;
                dot_count++;
            }
            else if(s[i]=='#'){
                consec_dot = 0;
            }
        }
        if(flag == false && consec_dot!=3)cout<<dot_count<<endl;
        else cout<<"2"<<endl;
    }
    return 0;
}