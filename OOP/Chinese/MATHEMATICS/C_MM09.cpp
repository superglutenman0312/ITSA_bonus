#include<bits/stdc++.h>
using namespace std;

int pow(int a,int b){
    int ans=1;
    while(b--)ans*=a;
    return ans;
}

int main(){
    int i;
    while(cin>>i){
        if(i>31)cout<<"Value of more than 31\n";
        else cout<<pow(2,i)<<"\n";
    }
}