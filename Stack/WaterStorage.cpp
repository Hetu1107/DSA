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
    stack<int>st;
    int ans=0;
    for(int i=0;i<n;i++){
        while(!st.empty() && v[st.top()]<v[i]){
            int cur = st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            int len = i - st.top() - 1;
            ans += ((min(v[st.top()],v[i]) - v[cur])*len);
        }
        st.push(i);
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