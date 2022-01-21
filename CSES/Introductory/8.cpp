#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    if(n<=2){
        cout<<"NO"<<"\n";
    }
    else{
        long long sum = ((n)*(n+1))/2;
        if(sum%2!=0){
            cout<<"NO"<<"\n";
        }
        else{
            vector<long long>a;
            vector<long long>b;
            if(n%2==0){
                for(int i=1;i<(n/2);i++){
                    a.push_back(i);
                    b.push_back(i+1);
                    i+=1;
                }
                for(int i=(n/2)+1;i<n;i++){
                    b.push_back(i);
                    a.push_back(i+1);
                    i+=1;
                }       
            }
            else{
                int k = 2;
                int l = 2;
                int y = 1;
                a.push_back(1);
                a.push_back(2);
                b.push_back(3);
                if(n>3){
                a.push_back(4);
                }
                for(int i=5;i<=n;i++){
                    if(y==0){
                        if(k==2){
                            a.push_back(i);
                            if(i+1<=n){
                            a.push_back(i+1);
                            }
                            i+=1;
                            k = 2;
                            y =1;
                        }
                    }
                    else{
                        if(l==2){
                            b.push_back(i);
                            if(i+1<=n){
                            b.push_back(i+1);
                            }
                            i+=1;
                            l = 2;
                            y =0;
                        }
                    }
                }
            }
            cout<<"YES"<<"\n";
            cout<<a.size()<<"\n";
            for(int i=0;i<a.size();i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
            cout<<b.size()<<"\n";
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<"\n";
        }
    }
    
}


int main()
{
    int t;
    // cin>>t;
    t =1;
    while(t--){
    solve();
    }
}