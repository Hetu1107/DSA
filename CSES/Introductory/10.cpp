#include<bits/stdc++.h>
using namespace std;

long long fives(long long n){
    if(n<=1){
        return 0;
    }
    long long ans = 0;
    ans+=fives((n-n%5)/5);
    long long k = 0;
    long long o = n;
    if(o%5!=0){
        o = o - o%5;
    }
    return ans+(o/5);
}
void solve(){
    long long n;
    cin>>n;
    long long ans = fives(n);
    cout<<ans<<"\n";
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