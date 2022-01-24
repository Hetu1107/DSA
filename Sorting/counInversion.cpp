#include<iostream>
using namespace std;

long long merge(int a[],int l,int mid,int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int b[n1];
    int c[n2];
    long long inv = 0;
    for(int i=0;i<n1;i++){
        b[i] = a[l+i];
    }
    for(int i=0;i<n2;i++){
        c[i] = a[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(b[i]<=c[j]){
            a[k] = b[i];
            i++;
            k++;
        }
        else{
            a[k] = c[j];
            inv+=(n1-i);
            k++;
            j++;
        }
    }
    while(i<n1){
        a[k] = b[i];
        k++;
        i++;
    }
    while(j<n2){
        a[k] = c[j];
        j++;
        k++;
    }
    return inv;
}
long long mergeSort(int a[],int l,int r){
    long long inv = 0;
    if(l<r){
        int mid = (l+r)/2;
        inv+=mergeSort(a,l,mid);
        inv+=mergeSort(a,mid+1,r);
        inv+=merge(a,l,mid,r);
    }
    return inv;
}

int main(){
    int a[] = {3,2,1};
    int inversions = mergeSort(a,0,2);
    cout<<inversions<<"\n";
}