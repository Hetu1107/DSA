#include<bits/stdc++.h>
using namespace std;
vector<string>v;
void lg(string s,int n){
    if(n==1){
       v.push_back("0");
       v.push_back("1");
       return;
    }
    lg(s,n-1);
    int o = v.size()-1;
    for(int i=v.size()-1;i>=0;i--){
        v.push_back(v[i]);
    }
    for(int i=0;i<v.size();i++){
        if(i<=o){
            v[i] = "0"+v[i];
        }
        else{
            v[i] = "1"+v[i];
        }
    }
    return;
}
void solve(){
    int n;
    cin>>n;
    lg("",n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\n";
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