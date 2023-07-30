/*Problem Statement : Given 2 strings A and B, print all the interleavings of the 2 strings. 
An interleaved string of given two strings preserves the order of characters in individual strings 
and uses all the characters of both the strings. For simplicity, you can assume that the strings have unique characters.*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


void il(vector<string>& ans,int i,int j,int n,int m,string s,string s1,string s2){
    if(i==n&&j==m){
        ans.push_back(s);
        return;
    }
    if(i<n)
    il(ans,i+1,j,n,m,s+s1[i],s1,s2);
    if(j<m)
    il(ans,i,j+1,n,m,s+s2[j],s1,s2);
}


void solve(){
    string s1,s2;
    cin>>s1>>s2;
    vector<string> ans;
    int n = s1.size();
    int m = s2.size();
    il(ans,0,0,n,m,"",s1,s2);
    sort(ans.begin(),ans.end());
    for(auto i:ans){
        cout<<i<<endl;
    }
     
}
    
    
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1,x=1;
    std::cin >> T;
    while(T--){
        cout<<"Case #"<<x<<":"<<endl;x++;
        solve();
    }
    return 0;
}

