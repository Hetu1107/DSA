#include<bits/stdc++.h>
using namespace std;
#define m 1000000007;
typedef long long ll;
typedef vector<int> v;
typedef vector<pair<ll,ll>> vp;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}


void solve(){
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]==')'){
            int f = 1;
            char top = st.top();
            st.pop();
            while(!st.empty() && st.top!='('){
                if(top=='+' || top=='-' || top=='*' || top=='/'){
                    f = 0;
                }
                top = st.top();
                st.pop();
            }
            if(f==1){
                return 1;
            }
        }
        else{
            st.push(s[i]);
        }
    }
    
}



int main()
{
    int t;
    // cin>>t;
    t = 1;
    while(t--){
    solve();
    }
}