#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int A[105]={0};
    int cnt=0,right_to_left;
    while(cin>>A[cnt++]){}
    cnt--;
    right_to_left = cnt-1;
    // cout<<"cnt:"<<cnt<<"\n";
    // for(int i=0;i<cnt;i++)cout<<A[i]<<" ";
    // cout<<"\n";

    for(int i=0;i<cnt;i++){
        if(right_to_left > i){
            swap(A[right_to_left],A[i]);
            right_to_left--;
        }
    }

    // cout<<"after\n";
    for(int i=0;i<cnt;i++)cout<<A[i]<<" ";
    cout<<"\n";
}