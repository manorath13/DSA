
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


void TOH(int n, char a, char b,char c)
{
    if (n == 0) {
        return;
    }
    TOH(n - 1, a, c, b);
    cout << "Move " << n << " from " << a
         << " to " << b << endl;
    TOH(n - 1, c, b, a);
}


void solve(){
     int n;
     cin>>n;
     cout<<pow(2,n)-1<<endl;
     TOH(n,'A','C','B');

     
}
    
    
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
   // cin>>T;
    while(T--){
       
        solve();
    }
    return 0;
}

