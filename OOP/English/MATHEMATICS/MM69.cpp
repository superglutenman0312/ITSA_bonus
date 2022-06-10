#include<bits/stdc++.h>
using namespace std;

void judge(int bmi){
    if(bmi<18.5) cout<<"underweight";
    if(bmi>=18.5 && bmi<24) cout<<"normal";
    if(bmi>=24 && bmi<27) cout<<"overweight";
    if(bmi>=27 && bmi<30) cout<<"mild obesity";
    if(bmi>=30 && bmi<35) cout<<"moderate obesity";
    if(bmi>=35) cout<<"severe obesity";
    cout<<"\n";
}

int main(){
    float h,w,bmi;
    cin>>h>>w;
    h/=100;
    bmi=w/(h*h);
    cout<< fixed << setprecision(1) <<bmi<<" ";
    judge(bmi);
}