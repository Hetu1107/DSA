#include<iostream>
using namespace std;

long long Tiling(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return Tiling(n-1) + Tiling(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<Tiling(n);
}