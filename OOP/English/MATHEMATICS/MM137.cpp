#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x=1;
    cin>>n;
    while(n--){
        cin>>m;
        for(int i=1;i<=m;i++){
            x*=2;
        }
        cout<<x<<"\n";
        x=1;
    }
}