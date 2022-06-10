#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,ans;
    while(cin>>a>>b){
        int low=min(a,b);
        for(int i=1;i<=low;i++){
            if(a%i==0 && b%i==0)ans=i;
        }
        cout<<ans<<"\n";
    }
}