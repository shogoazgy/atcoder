#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll k;
    cin >> k;
    string s, t;
    cin >> s >> t;
    vector<ll> a(10, k);
    rep(i, 4) {
        a[s[i] - '0']--;
        a[t[i] - '0']--;
    } 
    ll c = 0;
    for (int i = 1; i < 10; ++i) {
        s[4] = i + '0';
        for(int j = 1; j < 10; ++j) {
            t[4] = j + '0';
            ll ts = 0;
            ll tt= 0;
            vector<int> ta(10);
            vector<int> sa(10);
            rep(k, 5) {
                ta[s[k] - '0']++;
                sa[t[k] - '0']++;
            }
            for (int l = 1; l < 10; ++l) {
                int x = ta[l];
                int y = sa[l];
                int tx = 1;
                int ty = 1;
                while(x--) {
                    tx *= 10;
                }
                while(y--) {
                    ty *= 10;
                }
                ts += tx * l;
                tt += ty * l;
            }
            if (ts > tt) {
                if (i == j) {
                    c += a[i] * (a[i] - 1);
                } else {
                    c += a[i] * a[j];
                }
            }
        }
    }
    double ans = (double)c / (9 * k - 8) / (9 * k - 8 - 1);
    if (ans >= 1) {
        cout << 1.0 << endl;
    } else {
    cout << ans << endl;
    }


}