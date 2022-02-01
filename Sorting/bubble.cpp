#include<iostream>
using namespace std;

int main(){
    int a[] = {4,1,5,2,7};
    int n = sizeof(a)/sizeof(a[0]);

    int c = 1;
    while(c<n){
        for(int i=0;i<n-c;i++){
            if(a[i]>a[i+1]){
                int t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
        }
        c++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}