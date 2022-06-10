#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int cnt = 0;
    bool flag = true;
    for(int i=str.length()-1;i>=0;i--){
        if(str[cnt++]!=str[i]){
            flag = false;
            break;
        }
    }
    if(flag) cout<<"yes\n";
    else cout<<"no\n";
}