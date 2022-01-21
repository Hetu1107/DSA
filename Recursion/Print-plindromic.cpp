#include<iostream>
using namespace std;

bool yes(string s){
    int n = s.length();
    int k = 0;
    if(n%2==0){
        k = n/2 - 1;
    }
    else{
        k = (n-1)/2 - 1;
    }
    int j = n-1;
    for(int i=0;i<=k;i++){
        if(s[j]!=s[i]){
            return false;
        }
    }
    return true;
}
void plindrome(int n,string s){
    if(n==s.length()-1){
        return;
    }
    for(int i=0;i<s.length();i++){
        if(yes(s.substr(i,n+1))){
            cout<<s.substr(i,n+1)<<" ";
        }
        else{
            cout<<s[i]<<" ";
        }
    }
    cout<<"\n";
    plindrome(n+1,s);
}

int main(){
    plindrome(0,"Geeks");
}