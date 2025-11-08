#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    int H,B; cin>>H>>B;
    if(H>B)
        cout<<(H-B);
    else
        cout<<0;
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