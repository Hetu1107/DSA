#include<iostream>
using namespace std;
void Reverse(string s){
    if(s.length()==0){
        return;
    }
    Reverse(s.substr(1));
    cout<<s[0]<<"";
}
int main(){
    Reverse("HEtu");
}