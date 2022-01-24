#include<bits/stdc++.h>
using namespace std;


void solve(){
    string s;
    cin>>s;
    int a[26] = {0};
    int start = int('A');
    for(int i=0;i<s.length();i++){
        a[int(s[i]) - start]++;
    }
    int max = 0;
    int pos = 0;
    for(int i=0;i<26;i++){
        if(a[i]%2!=0){
            max = a[i];
            pos = i;
        }
    }
    for(int i=0;i<26;i++){
        if(i!=pos && a[i]%2!=0){
            cout<<"NO SOLUTION"<<"\n";
            return;
        }
    }
    int tone = 0;
    for(int i=0;i<26;i++){
        if(i==pos){
            if(max%2==0){
                a[i]/=2;
                tone = 0;
            }
            else{
                a[i]-=1;
                a[i]/=2;
                tone = 1;
            }
        }
        else{
            a[i]/=2;
        }
    }
    string ans = "";
    for(int i=0;i<26;i++){
        for(int j=0;j<a[i];j++){
            ans+=(char(i+start));
        }
    }
    if(tone == 1){
        string toneans = ans;
        toneans+=char(pos+start);
        for(int i = ans.length()-1;i>=0;i--){
            toneans+=ans[i];
        }
        cout<<toneans<<"\n";
        return;
    }
    else{
         for(int i = ans.length()-1;i>=0;i--){
            ans+=ans[i];
        }
        cout<<ans<<"\n";
        return;
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
    return 0;
}