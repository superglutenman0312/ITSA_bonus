#include<bits/stdc++.h>
using namespace std;

int main(){
    int col,row;
    int A[15][15],B[15][15],C[15][15];
    cin>>col>>row;
    for(int i=0;i<col;i++){//A
        for(int j=0;j<row;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<col;i++){//B
        for(int j=0;j<row;j++){
            cin>>B[i][j];
        }
    }
    for(int i=0;i<col;i++){//C
        for(int j=0;j<row;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<C[i][j];
            if(j!=row-1)cout<<" ";
        }
        cout<<"\n";
    }
}