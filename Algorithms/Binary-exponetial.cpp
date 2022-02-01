#include<iostream>
using namespace std;

long long binpow(long long a,long long b,long long m){
    a = a%m;
    long long res = 1;
    while(b>0){
        if(b&1)
            res = res*a%m;
        a = a*a%m;
        b = b>>1;
    }
}

int main(){
    cout<<binpow(10,5,1e9+7);
}