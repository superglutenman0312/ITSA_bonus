#include<bits/stdc++.h>
using namespace std;
int a,b,sum=0;
int main(){
    while(cin>>a){
        cin>>b;
        sum=0;
        for(int i=a;i<=b;i++){
            if(i%2)sum+=i;
        }
        cout<<sum<<"\n";
    }
}