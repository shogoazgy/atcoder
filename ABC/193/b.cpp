#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll t = 10000000000;
    int f = 0;
    rep(i, n) {
        ll a, p, x;
        cin >> a >> p >> x;
        if (a < x) {
            f = 1;
            t = min(t, p);
        }
    }
    if (f) {
        cout << t << endl;
    } else {
        cout << -1 << endl;
    }
    
}