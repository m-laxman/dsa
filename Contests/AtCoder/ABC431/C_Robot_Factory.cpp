#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    ll N,M,K; cin>>N>>M>>K;
    vector<ll> HWs(N), BWs(M);
    for(ll i=0; i<N; i++)
        cin>>HWs[i];
    
    for(ll i=0; i<M; i++)
        cin>>BWs[i];

    sort(HWs.begin(), HWs.end());
    sort(BWs.begin(), BWs.end());
    ll i=0, j = 0, ans = 0;
    while(i<N && j<M) {
        if(HWs[i]<=BWs[j]) {
            j++;
            i++;
            K--;
        }
        else
            j++;
        
        if(K==0) {
            cout<<"Yes"; return;
        }
    }
    cout<<"No";

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