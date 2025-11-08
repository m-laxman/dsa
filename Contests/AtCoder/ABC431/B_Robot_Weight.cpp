#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    int X, N, Q;
    cin>>X>>N;
    vector<int> weights(N);
    for(int i=0; i<N; i++) {
        cin>>weights[i];
    }
    cin>>Q;
    // unordered_map<int, int> mp;
    vector<int> queries(Q), attached(N,0);
    for(int i=0; i<Q; i++) {
        int weight_id; cin>>weight_id;

        if(attached[weight_id-1] == 0) {
            X += weights[weight_id - 1];
            attached[weight_id-1] = 1;
        }
        else {
            X -= weights[weight_id - 1];
            attached[weight_id-1] = 0;
        }
        cout<<X<<"\n";
        
        // mp[weight_id]++;
        // queries[i] = weight_id;
    }


    // for(auto it=mp.begin(); it!=mp.end(); it++) {
    //     int flag = 1;
    //     while(it->second--) {
    //         if(flag == 1) {
    //             X += weights[it->first - 1];
    //             flag = 0;
    //         }
    //         else if(flag == 0) {
    //             X -= weights[it->first - 1];
    //             flag = 1;
    //         }
    //     }
    //     cout<<X<<"\n";
    // }
    // for(int i=0; i<Q; i++) {
    //     if(mp.find(queries[i])!=mp.end()) {
    //         X += 
    //     }
    // }

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