#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,A[10000];
    cin>>n;
    while(n--){
        int maxx=-1e9,minn=1e9,ans=0;
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>A[i];
            maxx=max(maxx,A[i]);
            minn=min(minn,A[i]);
        }
        for(int i=1;i<=minn;i++){
            if(maxx%i==0 && minn%i==0)ans=i;
        }
        cout<<ans<<"\n";
    }
}