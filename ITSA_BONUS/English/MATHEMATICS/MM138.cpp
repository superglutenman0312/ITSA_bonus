#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[100000];
    int n,pre=0,suf=0;
    cin>>n;
    for(int i=0;i<n;i++)cin>>A[i];
    for(int i=0;i<n;i++){
        pre+=A[i];
        suf+=A[n-1-i];
        if(pre==suf)cout<<pre<<"\n";
    }
}