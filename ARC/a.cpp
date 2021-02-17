#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    rep (i, t) {
        ll l, r;
        cin >> l >> r;
        ll a = l * 2;
        ll ans = 0;
        if (a <= r) {
            ans = (r - a + 1) * (r - a + 2) / 2;
        }
        
        /*
        for (ll i = l; i <= r; ++i) {
            if (i / 2 >= l) {
                if(i % 2 == 0) {
                    ans = (r - i + 1) * (r - i + 2) / 2;
                } else {
                    ans = (r - i + 1) * (r - i + 4) / 2;
                }
            }
            break;
        }*/
        cout << ans <<endl;
    }
}