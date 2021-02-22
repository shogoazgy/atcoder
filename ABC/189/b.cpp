#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll n, x;
    cin >> n >> x;
    int f = 1;
    ll s = 0;
    rep(i, n) {
        ll v, p;
        cin >> v >> p;
        s += v * p;
        if (s > 100 * x) {
            f = 0;
            cout << i + 1 << endl;
            break;
        }
    }
    if (f) {
        cout << -1 << endl;
    }
}