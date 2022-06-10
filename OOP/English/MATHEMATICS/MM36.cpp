#include<bits/stdc++.h>
using namespace std;

bool judge(int n){
    bool flag=false;
    for(int i=2;i<n;i++){
        if(n%i==0){//can be divided
            flag=true;
            break;
        }
    }
    return !flag;
}

int main(){
    int n;
    while(cin>>n){
        if(!n)break;
        int cnt=0;
        if(n==1 || n==2){
            cout<<"0\n";
            continue;
        }
        for(int i=2;i<n;i++){
            if(judge(i))cnt++;
        }
        cout<<cnt<<"\n";
    }
}