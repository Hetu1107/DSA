#include<bits/stdc++.h>
using namespace std;
#define ll long long;
#define m 1000000007;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}


void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int unique = a[0];
    for(int i=1;i<n;i++){
        unique^=a[i];
    }
    cout<<unique<<"\n";
    
}



int main()
{
    int t;
    // cin>>t;
    t =1;
    while(t--){
    solve();
    }
}