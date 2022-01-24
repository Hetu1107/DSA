#include<iostream>
using namespace std;


void countSort(int a[],int n){
    int max = a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    int count[max+1]={0};
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    for(int i=1;i<max+1;i++){
        count[i]+=count[i-1];
    }
    int b[n];
    for(int i=0;i<n;i++){
        b[--count[a[i]]] = a[i];
        // count[a[i]]--;
    }
    for(int i=0;i<n;i++){
        a[i] = b[i];
    }
}

int main(){
    int a[]={1,2,9,5,3,4,1,2};
    countSort(a,(sizeof(a)/sizeof(a[0])));
    for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
}