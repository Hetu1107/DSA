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
    vector<int>v;
    stack<pair<int,int>>st;
    int n = v.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        int days = 1;
        while(!st.empty() && st.top().first <= v[i]){
            days+=st.top().second;
            st.pop();
        }
        st.push({v[i],days});
        ans.push_back(days);
    }
}



int main()
{
    solve();
}