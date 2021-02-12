#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll n, s, d;
    int f = 0;
    cin >> n >> s >> d;
    rep(i, n) {
        ll x, y;
        cin >> x >> y;
        if (s > x) {
            if (y > d) {
                f = 1;
                break;
            }
        }
    }
    if (f) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}