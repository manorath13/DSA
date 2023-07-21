#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007

int powermod(long long x, long long int y) //(x^y)%MOD
{
    int res = 1; 
 
    x = x % MOD; 
  
    if (x == 0) return 0; 
 
    while (y > 0)
    {
        if (y & 1){
            res = (res*x) % MOD;
        }
 
        y = y>>1; 
        x = (x*x) % MOD;
    }
    return res;
}
void solve(){
     int a,b;
     cin>>a>>b;
      int ans = powermod(a,b);
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

