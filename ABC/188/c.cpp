#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll m = 0;
    ll lm = 0;
    ll li = 1;
    for (ll i = 0; i < 1 << (n - 1); ++i) {
        ll a;
        cin >> a;
        if (m < a) {
            m = a;
            li = i + 1;
        }
    }
    lm = m;
    m = 0;
    ll rm = 0;
    ll ri = 1 << (n - 1);
    ++ri;
    for (ll i = 1 << (n - 1); i < 1 << n; ++i) {
        ll a;
        cin >> a;
        if (m < a) {
            m = a;
            ri = i + 1;
        }
    }
    rm = m;
    if (rm > lm) {
        cout << li << endl;
    } else {
        cout << ri << endl;
    }
}