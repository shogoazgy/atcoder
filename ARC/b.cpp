#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll b, c;
    cin >> b >> c;
    if (b < 0) {
        b = -b;
        c++;
    } 
    ll ans = 0;
    ans++;
    if (b == 0) {
        ans += c / 2;
        ans += (c - 1) / 2; 
    } else {
        ans++;
        ans += (c - 2) / 2;
        ans += (c - 1) / 2;
        if (b - (c / 2) <= -b + (c - 1) / 2) {
            ans += 2 * b - 1;
        } else {
            ans += c / 2;
            ans += (c - 1) / 2;
        }
    }
    cout << ans << endl;


}