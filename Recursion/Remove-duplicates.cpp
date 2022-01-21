#include<iostream>
using namespace std;

string duplicates(string s){
    if(s.length()==0){
        return "";
    }
    char a = s[0];
    string ss = duplicates(s.substr(1));
    if(a==ss[0]){
        return ss;
    }
    else{
        return (ss+a);
    }
}
int main(){
    string s = duplicates("aaaaaaaabbbbbcccc");
    cout<<s<<"\n";
}