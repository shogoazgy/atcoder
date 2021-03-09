#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll ans = 0;
    ll t = 0;
    rep(i,n) {
        ll x;
        cin >> x;
        ans += x*x;
        t += x;
    }
    ans *= n;
    ans = ans - t*t;
    cout << ans << endl;
}