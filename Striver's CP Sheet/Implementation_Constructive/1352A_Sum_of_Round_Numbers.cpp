#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    int n; cin>>n;
    int exp = 1;
    vector<int> ans;
    while(n) {
        int last_digit = n%10;
        int temp = last_digit * exp;
        if(temp) {
            ans.push_back(temp);
        }
        exp *= 10;
        n/=10;
    }
    cout<<ans.size()<<"\n";
    for(auto i: ans) {
        cout<<i<<" ";
    }
    cout<<"\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}