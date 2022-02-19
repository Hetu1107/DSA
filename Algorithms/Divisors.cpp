#include<bits/stdc++.h>
using namespace std;

void printDivisors(int n)
{
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                cout <<" "<< i;
            else
                cout << " "<< i << " " << n/i;
        }
    }
}
void solve(){
    int n = 100;
    printDivisors(n);
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