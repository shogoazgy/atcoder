#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll c = 0;
    ll x = 1000;
    ll y = 1;
    ll ans = 0;
    
    while(1) {
        if (n / x < 1) {
            break;
        }
        ans += n - x + 1;
        x *= 1000;
    }
    
    cout << ans << endl;
}