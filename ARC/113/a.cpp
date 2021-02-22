#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll k;
    cin >> k;
    ll ans = 0;
    for (int i = 1;i <= k; ++i) {
        for (int j = i; j <= k / i; ++j) {
            for (int l = j; l <= k / i / j; ++l) {
                if (i * j * l <= k) {
                    if (i == j && j == l) {
                        ans += 1;
                    } else if (i != j && j != l && i != l) {
                        ans += 6;
                    } else {
                        ans += 3;
                    }
                } else {
                    break;
                }
            }
        }
        
    }
    cout << ans << endl;
}