#include<bits/stdc++.h>
using namespace std;

int cmp(float a,float b){
    return a<b;
}

int main(){
    float mid;
    float A[100000];
    
    int k=0;
    while(cin>>A[k++]){}
    k--;

    sort(A,A+k,cmp);

    if(k%2){
        mid=A[(k/2)];
        cout<<"Median="<<mid<<"\n";
    }
    else{
        mid=(A[(k/2)]+A[(k/2)-1])/2;
        cout<<"Median="<<mid<<"\n";
    }
}