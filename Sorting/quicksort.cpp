#include<iostream>
using namespace std;


int partition(int a[],int l,int r){
    int pirated = a[r];
    int i = l-1;
    for(int j=l;j<=r;j++){
        if(a[j]<pirated){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}
void quickSort(int a[],int l,int r){
    if(l<r){
        int pi = partition(a,l,r);
        quickSort(a,l,pi-1);
        quickSort(a,pi+1,r);
    }
}
int main(){
    int a[] = {1,4,2,5,3,3,8};
    quickSort(a,0,6);
    for(int i=0;i<=6;i++){
        cout<<a[i]<<" ";
    }
}