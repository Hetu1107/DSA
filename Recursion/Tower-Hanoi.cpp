#include<iostream>
using namespace std;

void towerHanoi(int n,char src,char dest,char help){
    if(n==0){
        return;
    }
    towerHanoi(n-1,src,help,dest);
    cout<<"Moved  "<<src<<"  To  "<<dest<<"\n";
    towerHanoi(n-1,help,dest,src);
}
int main(){
    int n;
    towerHanoi(2,'A','C','B');
}
