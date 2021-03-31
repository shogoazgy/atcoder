#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) {
        cin >> a[i];
    }
    int ans = 2147483647;
    for (int bit = 0; bit < (1 << n); ++bit) {
        int t = 0;
        int x = 0;
        for (int i = 0; i < n; ++i) {
            x |= a[i];
            if ((bit >> i) & 1) {
                t ^= x;
                x = 0;
            }
        }
        t ^= x;
        ans = min(ans, t);
    }
    cout << ans << endl;
}