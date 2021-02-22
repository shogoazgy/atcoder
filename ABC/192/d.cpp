#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    string x;
    cin >> x;
    ll m;
    cin >> m;
    int n = x.length();
    if (n == 1) {
        if (stoi(x) <= m) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    } else {
        int d = 0;
        for (char c : x) {
            d = max(d, int(c - '0'));
        }
        ll ac = d;
        ll wa = m + 1;
        
        while(wa > ac + 1) {
            //cout << wa << endl;
            ll t = 0;
            ll wj = (ac + wa) / 2;
            for (char c : x) {
                if(t > m / wj) {
                    t = m + 1;
                } else {
                    t = t * wj + (c - '0');
                }
            }
            if (t <= m) {
                ac = wj;
            } else {
                wa = wj;
            }
        }
        cout << ac - d << endl;
    }

}