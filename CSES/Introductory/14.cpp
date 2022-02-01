#include<bits/stdc++.h>
using namespace std;
void Hannoi(int a,int c,int b,int n){
    if(n==0){
        return;
    }
    Hannoi(a,b,c,n-1);
    cout<<a<<" "<<c<<"\n";
    Hannoi(b,c,a,n-1);
}

void solve(){
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<"\n";
    Hannoi(1,3,2,n);
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