#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector <ll> a(n);
    rep(i,n) {
        cin >> a[i];
    }
    ll ans = 0;
    for(ll i = 0; i < n - 1; ++i) {
        for (ll j = i + 1; j < n; ++j) {
            ans += (a[i]-a[j])*(a[i]-a[j]);
            //cout << ans << endl;
        }
    }
    cout << ans << endl;
}