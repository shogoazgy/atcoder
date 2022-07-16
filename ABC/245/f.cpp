#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> ein;
    vector<ll> eout;
    vector<vector<ll>> v(n);
    ll v_deleted_tf[n];
    rep(i, m) {
        ll out, in;
        cin >> out, in;
        v[out].push_back(in);
        ein.push_back(in);
        eout.push_back(out);
    }
    while(true) {
        int flag = 0;
        vector<ll> v_deleted;
        rep(i, n) {
            if (v[i].size() == 0 && v_deleted_tf[i] == 0) {
                flag = 1;
                v_deleted_tf[i] = 1;
                v_deleted.push_back(i);
            }
        }
        if (flag == 0) {
            break;
        }
        rep(i, ein.size()) {
            int f = 0;
            ll in = ein[i];
            rep(j, v_deleted.size()) {
                if (v_deleted[j] == in) {
                    v[out] -= 1;
                }
            }
        }
    }
    ll ans = 0;
    rep(i, n) {
        if (!v_deleted_if) {
            ans += 1;
        }
    }
    cout << ans << endl;
}