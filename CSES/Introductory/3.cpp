#include<bits/stdc++.h>
using namespace std;


void solve(){
    
    string s;
    cin>>s;
    int max = 1;
    int maxn = 1;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            max+=1;
    }
    else{
        if(max>maxn){
            maxn = max;
        }
        max = 1;
    }
    }
    if(max>maxn){
            maxn = max;
        }
    cout<<maxn<<"\n";
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