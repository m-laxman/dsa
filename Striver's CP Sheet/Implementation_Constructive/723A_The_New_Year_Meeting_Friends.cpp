#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    int a, b, c; cin>>a>>b>>c;
    int mini = min(min(a,b),c);
    int maxi = max(max(a,b),c);
    
    cout<<maxi-mini;


}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}