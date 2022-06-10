#include<bits/stdc++.h>
using namespace std;

int c_x(int x){
    int cnt=0,i=0;
    while(++i){
        if(x==1){
            cnt=i-1;
            break;
        }
        if(x%2)x=3*x+1;
        else x/=2;
    }
    return cnt;
}

int main(){
    int n,x;
    cin>>n;
    while(n--){
        cin>>x;
        if(x==1)cout<<"1\n";
        else cout<<c_x(x)<<'\n';
    }
}