#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    double ans = 0;
    for (int i = 1; i < n; ++i) {
        ans += 1.0 * n / (n - i);
    }
    //cout << ans << endl;
    printf("%.9f\n", ans);
}