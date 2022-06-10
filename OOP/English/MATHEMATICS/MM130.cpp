#include<bits/stdc++.h>
using namespace std;

int A[100000];

int cmp(int a,int b){
    return a<b;
}

int main(){
    int cnt=0;
    while(cin>>A[cnt++]){}
    cnt--;
    sort(A,A+cnt,cmp);
    if(cnt%2) cout<<A[(cnt/2)]<<"\n";
    else cout<<(A[(cnt/2)]+A[(cnt/2)-1])/2<<"\n";
}