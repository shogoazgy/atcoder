#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll n, m;
    cin >> n >> m;
    
    vector<ll> a(m);
    vector<ll> b(m);
    rep (i, m) {
        cin >> a[i] >> b[i];
    }
    ll k;
    cin >> k;
    vector<ll> c(k);
    vector<ll> d(k);
    rep (i, k) {
        cin >> c[i] >> d[i];
    }
    ll max = 0;
    for (int bit = 0; bit < (1<<k); ++bit) {
        vector<int> x(n);
        for (int i = 0; i < k; ++i) {
            if (bit & (1 << i)) {
                x[c[i]] = 1;
            } else {
                x[d[i]] = 1;
            }
        }
        ll tmp = 0; 
        rep (j, m) {
            if (x[a[j]] = 1 && x[b[j]] == 1) {
                ++tmp;
            }
        }
        if (tmp > max) {
            max = tmp;
        }
    }
    cout << max << endl;
}