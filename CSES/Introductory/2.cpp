#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long int n;
    cin>>n;
    int k = ((n)*(n+1))/2;
    for(int i=0;i<n-1;i++){
        int t;
        cin>>t;
        k-=t;
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