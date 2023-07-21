
#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
     int n;
    cin>>n;
    int c = n&(n-1);
    c==0?cout<<"True":cout<<"False";
    cout<<endl;
}
    
    
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    std::cin >> T;
    while(T--){
        solve();
    }
    return 0;
}

