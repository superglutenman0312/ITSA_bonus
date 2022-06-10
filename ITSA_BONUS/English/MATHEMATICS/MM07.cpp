#include<bits/stdc++.h>
using namespace std;

int A[10];

void seperate(int m){
    int cnt=7;
    A[0]=-1;
    while(m>0){
        A[cnt--]=m%10;
        m/=10;
    }
}

int main(){
    int n,m,cnt=0;
    int a,b;
    int time=1;
    cin>>n>>m;
    a=n/10;
    b=n%10;
    seperate(m);
    for(int i=2;i<=7;i++){
        if(A[i-1]==a && A[i]==b) cnt++;
    }
    cout<<cnt<<"\n";
}