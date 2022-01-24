#include<bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1){
            res = res * a % m;
        }
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
void solve(){
    long long n;
    cin>>n;
    long long ans = binpow(2,n,(1e9 + 7));
    // cout<<ans<<"\n";
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