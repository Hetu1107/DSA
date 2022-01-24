#include<iostream>
using namespace std;

void DNF(int a[],int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(a[mid]==0){
            int k = a[low];
            a[low]=a[mid];
            a[mid] = k;
            low++;
            mid++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            int k = a[high];
            a[high] = a[mid];
            a[mid] = k;
            high--;
        }
    }
}
int main(){
    int a[] = {1,2,0,1,1};
    DNF(a,(sizeof(a)/sizeof(a[0])));
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}