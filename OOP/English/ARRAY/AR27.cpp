#include<bits/stdc++.h>
using namespace std;
int A[100000];
int main(){
    int n,real=0,sum=0;
    cin>>n;
    for(int i=1;i<=n-1;i++){
        cin>>A[i];
        sum+=A[i];
    }
    for(int i=1;i<=n;i++)real+=i;
    cout<<real-sum<<"\n";
}
