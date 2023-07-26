
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef vector<int> vi;


// take and not take
void subsets(vector<vi>& ans, vi& a, vi& s, int i) {
    int n = a.size();
    if (i == n) {
        ans.push_back(s);
        return;
    }
    subsets(ans, a, s, i + 1);
    s.push_back(a[i]);
    subsets(ans, a, s, i + 1);
    s.pop_back();
}

// using loop
void subset(vector<vi>& ans, vi& a, vi& s, int ind) {
    int n = a.size();
    ans.push_back(s);
    for(int i=ind;i<n;++i){
        s.push_back(a[i]);
        subset(ans,a,s,i+1);
        s.pop_back();
    }
}

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<vi> ans;
    vi s;
    subset(ans, a, s, 0);
    
    sort(ans.begin(),ans.end());
    for (auto i : ans) {
        for (auto it : i) {
            cout << it << " ";
        }
        cout << endl;
    }
}

int main() {
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

