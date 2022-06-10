    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int a,b,length_square;
        while(cin>>a>>b){
            length_square = (a*a)+(b*b);
            if(length_square < 10000)cout<<"inside\n";
            else cout<<"outside\n";
        }
    }