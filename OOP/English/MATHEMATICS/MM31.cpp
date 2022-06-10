#include<bits/stdc++.h>
using namespace std;

long long int fac[20];

int main(){
    fac[0]=1;
    fac[1]=1;
    for(int i=2;i<=18;i++) fac[i]=fac[i-1]*i;
    int n,m;
    cin>>n;
    while(n--){
        cin>>m;
        cout<<fac[m]<<"\n";
    }
}