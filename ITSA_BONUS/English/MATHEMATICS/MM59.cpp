#include<bits/stdc++.h>
using namespace std;

int A[100000],num[100000];

int main(){
    int cnt=0,max=0,most_appear_value;
    float half;
    while(cin>>A[cnt++]){}
    cnt--;
    half=cnt/2;
    for(int i=0;i<cnt;i++){
        num[A[i]]++;
        if(num[A[i]]>max){
            max=num[A[i]];
            most_appear_value=A[i];
        }
    }
    if(max>half)cout<<"Majority is "<<most_appear_value<<"\n";
    else cout<<"No Majority\n";
}