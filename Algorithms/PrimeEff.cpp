#include<bits/stdc++.h>
using namespace std;
#define ll long long;
#define m 1000000007;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}

void PrintPrime(int n){
    int c = 2;
    while(n>1){
        if(n%c==0){
            cout<<c<<"\n";
            n/=c;
        }
        else{
            c++;
        }
    }
}
void solve(){
    int n;
    cin>>n;
    PrintPrime(n);
    
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