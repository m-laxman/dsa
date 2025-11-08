#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    int n = 0;
    while(n<=25) {
        int k; cin>>k;
        if(k==1) {
            int init_x = n/5 + 1, init_y = n%5 + 1;
            cout<< abs(init_x-3)+abs(init_y-3);
            break;
        }
        n++;
    }
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