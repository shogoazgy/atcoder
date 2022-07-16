#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m], c[n + m];
    for (ll i = 0;i <= n;i++) {
        cin >> a[i];
    }
    for (ll i = 0;i <= n + m;i++) {
        cin >> c[i];
    }
    for (ll i = m; i >= 0; i++) {
        ll x = 0;
        b[i] = c[n + i] / a[n];
        for (ll j = 0;j <= n; j++) {
            x += a[j] * b[i];
        }
    }
    rep(i, m) {
        cout << b[i] << endl;
    }
}