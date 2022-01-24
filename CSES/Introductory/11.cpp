#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long a,b;
    cin>>a>>b;
    long long l,m;
    long long x1,x2;
    int k =0;
    if((a-2*b)%3!=0){
        k = 0;
    }
    else{
        x2 = (2*b-a)/3;
        x1 = b - 2*x2;
        if((x1>=0&&x2>=0)||(x1<=0 && x2<=0)){
            
            k = 1;
        }
        else{
            k=0;
        }
    }
    if(a==0 && b==0){
        cout<<"YES"<<"\n";
    }
    else if(((a%2==0) && (a/2==b))&&(a>0&&b>0)){
        cout<<"YES"<<"\n";
    }
    else if(k==1&&(a>0&&b>0)){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
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