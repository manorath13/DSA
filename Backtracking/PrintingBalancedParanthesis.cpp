/*Problem Statement : Write a program to generate all possible strings
 with balanced paranthesis having N pairs of curly braces.*/
 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


void bp(int l,int r,vector<string>& ans,string s,int n){
    if(r==n){
        ans.push_back(s);
        return;
    }
    if(l<n){
        bp(l+1,r,ans,s+"{",n);
    }
    if(r<l){
        bp(l,r+1,ans,s+"}",n);
    }
}

void solve(){
    int n;
    cin>>n;
    vector<string> ans;
    
    bp(0,0,ans,"",n);
    
    // for(auto i:ans){
    //     cout<<i<<endl;
    // }
    for(int i=0;i<ans.size();++i){
        cout<<ans[i]<<endl;
    }
    
    
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1,x=1;
    std::cin >> T;
    while(T--){
        cout<<"Test Case #"<<x<<":"<<endl;x++;
        solve();
    }
    return 0;
}
