#include<bits/stdc++.h>
using namespace std;

double rounding(double num, int index){
    int multiplier;
    multiplier = pow(10, index);
    num = (int)(num * multiplier + 0.5) / (multiplier * 1.0);
    return num;
}

int main(){
    int a,b;
    float ans;
    cin>>a>>b;
    ans=a*b/2;
    ans=rounding(ans,1);
    cout<<fixed<<setprecision(1)<<ans<<"\n";
}