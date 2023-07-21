#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
     int n;cin>>n;
     int ans=0,b=0;
     while(n>0){
         ans+=(n%2)<<(31-b);
         n/=2;
         b++;
     }
     cout<<ans<<endl;
}
    
    
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    std::cin >> T;
    while(T--){
       // cout<<"Test Case #"<<x<<":"<<endl;x++;
        solve();
    }
    return 0;
}

