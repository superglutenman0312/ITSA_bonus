#include<bits/stdc++.h>
using namespace std;

long long int A[20];

void make_table(){
    for(int i=2;i<20;i++){
        A[i] = A[i-1]*i;
    }
}

int main(){
    int n;
    A[0]=1;
    A[1]=1;
    make_table();
    while(cin>>n){
        cout<<A[n]<<"\n";
    }
}