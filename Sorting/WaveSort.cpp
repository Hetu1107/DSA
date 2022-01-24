#include<iostream>
using namespace std;
void waveSort(int a[],int n){
    for(int i=1;i<n;i+=2){
        if(a[i]>a[i-1]){
            swap(a[i],a[i-1]);
        }
        if(a[i]>a[i+1] && i<=n-2){
            swap(a[i],a[i+1]);
        }
    }
}
int main(){
    int a[] = {1,5,7,9,3,6};
    waveSort(a,6);
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
}