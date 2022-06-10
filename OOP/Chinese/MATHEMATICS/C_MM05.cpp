#include<bits/stdc++.h>
using namespace std;

double rounding(double num, int index){
    int multiplier;
    multiplier = pow(10, index);
    num = (int)(num * multiplier + 0.5) / (multiplier * 1.0);
    return num;
}

int main(){
    double n;
    while(cin>>n){
        double ans=n*n;
        ans = rounding(ans,1);
        cout<<ans<<"\n";
    }
}

