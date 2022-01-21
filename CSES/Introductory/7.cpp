#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    long long int j = 1;
    long long int k= 1;
    for(long long int i=1;i<=n;i++){
        long long int ans;
        ans = ((i*i)*((i*i)-1))/2;
        if(i==1){
            cout<<0<<"\n";
        }
        else if(i==2){
            cout<<ans<<"\n";
        }
        else{
            long long int m = j*8;
            k++;
            j+=k;
            ans-=m;
            cout<<ans<<"\n";
        }
    }
    
}



int main()
{
    int t;
    // cin>>t;
    t = 1;
    while(t--){
    solve();
    }
}