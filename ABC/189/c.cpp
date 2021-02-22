#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) {
        cin >> a[i];
    }
    ll ans = 0;
    rep(i, n) {
        ll min = 1000000;
        for (ll j = i; j < n; ++j) {
            if (min > a[j]) {
                min = a[j];
            }
            ans = max(ans, min * (j - i + 1));
        }
    }
    cout << ans << endl;

}