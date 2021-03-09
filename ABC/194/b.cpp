#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    int t = 300000;
    int s = 300000;
    int ti;
    int ts;
    int st;
    int ss;
    int ft = 0;
    int fs = 0;
    rep (i, n) {
        ll x,y;
        cin >>x >> y;
        if (t > x) {
            st = t;
            t = x;
            ti = i;
            ft = 0;
        } else if (t == x) {
            ft = 1;
        }
        if (s > y) {
            ss = s;
            s = y;
            ts = i;
            fs = 0;
        } else if (s == y) {
            fs = 1;            
        }
    }
    if (ti == ts) {
        if (fs == 1 || ft == 1) {
            cout << max(t, s) << endl;
        } else {
            if (t + s > ss || t + s > st) {
                cout << min(ss, st) << endl;
            } else {
                cout << t + s << endl;
            }
        }
        
    } else {
        cout << max(t, s) << endl;
    }

}