#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int>odd;
    vector<int>even;
    if(n==2 || n==3){
        cout<<"NO SOLUTION"<<"\n";
        return;
    }
    for(int i=1;i<=n;i++){
        if(i%2==0){
            even.push_back(i);
        }
        else{
            odd.push_back(i);
        }
    }
    for(int i=0;i<even.size();i++){
        cout<<even[i]<<" ";
    }
    for(int i=0;i<odd.size();i++){
        cout<<odd[i]<<" ";
    }
    cout<<"\n";
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