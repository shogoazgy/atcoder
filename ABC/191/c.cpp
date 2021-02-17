#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> a(h);
    rep(i, h) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < h - 1; ++i) {
        for (int j = 0; j < w - 1; ++j) {
            int d = 0;
            if (a[i][j] == '#') ++d;
            if (a[i][j + 1] == '#') ++d;
            if (a[i + 1][j] == '#') ++d;
            if (a[i + 1][j + 1] == '#') ++d;
            //cout << d << endl;
            if (d == 3 || d == 1) ++ans;
        }
    }
    cout << ans << endl;
}