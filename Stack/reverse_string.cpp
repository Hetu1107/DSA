#include<iostream>
#include<stack>
using namespace std;

void reversed(string s){
    stack<string>st;
    int n = s.length();
        string p = "";
    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
            st.push(p);
            p = "";
        }
        else{
            p+=s[i];
        }
    }
    st.push(p);
    while(st.size()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return;
}

int main(){
    string s = "hey hetu";
    reversed(s);
}