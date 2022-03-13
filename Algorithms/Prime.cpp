#include<bits/stdc++.h>
using namespace std;
#define ll long long;
#define m 1000000007;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}

void AllPrimeFac(int n){
    // first we will devide a number by 2 while n%2==0 
    if(n%2==0){
        cout<<2<<" ";
    }
    while(n%2==0){
        n/=2;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0){
            cout<<i<<" ";
        }
        while(n%i==0){
            n/=i;
        }
    }


    // it means if n is a prime number 
    if(n>2){
        cout<<n<<" ";
    }
    cout<<"\n";
}
void solve(){
    int n;
    cin>>n;
    AllPrimeFac(n);
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