#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;
const int MOD = 998244353;

int main() {
    string n;
    cin >> n;
    int length = n.length();
    ll ans = 0;
    ll x = 0;
    ll y = 1;
    if (length != 1) {
        x = 9;
        y = 10;
        while(true) {
            length -= 1;
            ans += x * (x + 1) / 2;
            ans %= MOD;
            if (length == 1) {
                break;
            }
            x *= 10;
            x %= MOD;
            y *= 10;
            y %= MOD;
        }
    }
    
    ans += ((stoll(n) - (y - 1)) % MOD) * ((stoll(n) - (y - 2)) % MOD) / 2;
    ans %= MOD;
    cout << ans << endl;
}