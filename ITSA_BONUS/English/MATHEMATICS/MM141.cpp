#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int A[100];
    bool flag=false;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
        if(i==A[i]){
            cout<<"x["<<i<<"] = "<<A[i]<<"\n";
            flag=true;
        }
    }
    if(!flag)cout<<"NOT FOUND!\n";
}