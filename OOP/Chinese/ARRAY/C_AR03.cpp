#include<bits/stdc++.h>
using namespace std;

long long int triple(int a){
    return a*a*a;
}

int main(){
    int x;
    long long int ans=0;
    for(int i=0;i<6;i++){
        cin>>x;
        ans += triple(x);
    }
    cout<<ans<<"\n";
}