#include<bits/stdc++.h>
using namespace std;

string s;
int A[100005];
int B[100005];
int cnt=1,even=0,odd=0;

//由個位數起每三個一組，奇數組-偶數組
void make(int length){
    cnt=1;
    for(int i=length;i>=1;i-=3){
        for(int k=2;k>=0;k--){
            B[cnt]*=10;
            B[cnt]+=A[i-k];
        }
        cnt++;
    }
}

int main(){
    int n;
    cin>>n;
    while(n--){
        odd=0,even=0;
        for(int i=0;i<100005;i++){
            A[i]=0;
            B[i]=0;
        }
        cin>>s;
        int length=s.length();
        for(int i=1;i<=length;i++){
            A[i]=s[i-1]-'0';
        }
        make(length);
        for(int i=1;i<=cnt;i++){
            if(i%2) odd+=B[i];
            else even+=B[i];
        }
        if((odd-even)%13) cout<<"false\n";
        else cout<<"true\n";
    }
}