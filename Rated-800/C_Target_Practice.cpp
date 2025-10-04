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
        long long res = 0;
        for(int i = 0;i<10;i++){
            for(int j = 0 ; j<10;j++){
                char a;
                cin>>a;
                if(a =='X'){
                    if(i==0||i==9||j==0||j==9) res+=1;
                    else if(i==1||i==8||j==1||j==8) res+=2;
                    else if(i==2||i==7||j==2||j==7) res+=3;
                    else if(i==3||i==6||j==3||j==6) res+=4;
                    else res+=5;

                }
            }   
        }
        cout<<res<<endl;

    }
    return 0;
}