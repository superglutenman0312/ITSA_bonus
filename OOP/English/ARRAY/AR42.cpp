#include<bits/stdc++.h>
using namespace std;
int A[11],B[11];
void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int data,min=1e9,max=-1e9;
    for(int i=0;i<10;i++){
        cin>>A[i];
        B[i] = A[i];
        if(A[i]>A[0])swap(A[i],A[0]);
        if(B[i]<B[0])swap(B[i],B[0]);
    }
    cout<<"Largest number = "<<A[0]<<"\n";
    cout<<"Smallest number = "<<B[0]<<"\n";
}