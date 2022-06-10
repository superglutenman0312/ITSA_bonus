#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin>>n;
    while(n--){
        int odd=0,even=0;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(i%2) odd+=(s[i]-'0');
            else even+=(s[i]-'0');
        }
        if((odd-even)%11)cout<<"false\n";
        else cout<<"true\n";
    }
}