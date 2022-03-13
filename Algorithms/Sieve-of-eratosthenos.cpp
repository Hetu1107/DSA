#include<bits/stdc++.h>
using namespace std;


void primeFactor(int n){
    int spf[n+1]={0};
    for(int i=2;i<=n;i++){
        spf[i] = i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
        for(int j=i*i;j<=n;j+=i){
            if(spf[j]==j){
            spf[j] = i;
            }
        }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
    cout<<"\n";
}

void solve(){
    long long int n;
    cin>>n;
    // n = 30;
    long long int a[n+1] = {0};
    for(long long int i=2;i<=n;i++){
        if(a[i]==0){
        for(long long int j=i*i;j<=n;j+=i){
            a[j] = 1;
        }
        }
    }
    for(int i=2;i<=n;i++){
        if(a[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
    // primeFactor(n);
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