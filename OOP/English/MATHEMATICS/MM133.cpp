#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double ans=0;
    cin>>n;
    if(n%2){
        for(double i=1;i<=n;i+=2){
            ans+=(double)(1/i);
        }
    }
    else{
        for(double i=2;i<=n;i+=2){
            ans+=(1/i);
        }
    }
    cout<<fixed<<setprecision(11)<<ans<<"\n";
}