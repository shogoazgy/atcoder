#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll n, c;
    cin >> n >> c;
    map<ll,ll> x;
    rep(i, n) {
        ll a, b, c;
        cin >> a >> b >> c;
        x[a] += c;
        x[b + 1] += -c;
    }
    ll ans = 0;
    ll pre = 0;
    ll s = 0;
    for (auto t : x) {
        ans += min(c, s) * (t.first - pre);
        s += t.second;
        pre = t.first;
    }
    cout << ans << endl;
}