#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long int k = 0;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            k+=(a[i-1]-a[i]);
            a[i] = a[i-1];
        }
    }
    cout<<k<<"\n";

    
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