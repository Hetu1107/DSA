#include<bits/stdc++.h>
using namespace std;
#define ll long long;
#define m 1000000007;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}


void solve(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    int ans = 0,i=0,nn=v.size();
    stack<int>st;
    while(i<nn){
        while(!st.empty() && v[st.top()]>v[i]){
            int t = st.top();
            int h = v[t];
            st.pop();
            if(st.empty()){
                ans = max(ans,i*h);
            }
            else{
                int len = i - st.top() - 1;
                ans = max(ans,h*len);
            }
        }
        st.push(i);
        i++;
    }
    cout<<ans<<"\n";
    
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