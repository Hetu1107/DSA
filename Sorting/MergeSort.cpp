#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r){
    int a[mid-l+1];
    int b[r-mid];
    for(int i=0;i<(mid-l+1);i++){
        a[i] = arr[l+i];
    }
    for(int j=0;j<(r-mid);j++){
        b[j] = arr[mid+1+j];
    }
    int k = l;
    int h = 0;
    int m = 0;
    while(h<(mid-l+1)&&m<(r-mid)){
        if(a[h]<b[m]){
            arr[k] = a[h];
            h++;
        }
        else{
            arr[k] = b[m];
            m++;
        }
        k++;
    }
    while(h<(mid-l+1)){
        arr[k] = a[h];
        h++;
        k++;
    }
    while(m<(r-mid)){
        arr[k]=b[m];
        k++;
        m++;
    }
}
void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}

int main(){
    int a[]={2,3,1,5,4};
    mergeSort(a,0,4);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}