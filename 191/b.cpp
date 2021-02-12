#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll n, x;
    cin >> n >>x;
    int f = 0;
    rep(i, n) {
        ll y;
        cin >> y;
        if (x != y) {
            if (f) cout << " " << y;
            else {
                cout << y;
                f = 1;
            }
        }
    }
    cout << endl;
}