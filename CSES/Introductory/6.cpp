#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long int x,y;
    cin>>x>>y;
    if(x>y){
        if(x%2==0){
            long long int max = x*x;
            cout<<(max-y+1)<<"\n";
        }
        else{
            long long int max = x*x - (x-1)*2;
            cout<<(max+y-1)<<"\n";
        }
    }
    else{
        if(y%2==0){
            long long int max = y*y - (y-1)*2;
            cout<<(max+x-1)<<"\n";
        }
        else{
            long long int max = y*y;
            cout<<(max-x+1)<<"\n";
        }
    }
    
}



int main()
{
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}