#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    vector<string> s(h);
    rep(i, h) {
        cin >> s[i];
    }
    x--;
    y--;
    int ans = 0;
    for (int i = x + 1; i < h; ++i) {
        if (s[i][y] == '#') {
            break;
        } else {
            ans++;
        }
    }
    
    for (int i = x - 1; i >= 0; --i) {
        if (s[i][y] == '#') {
            break;
        } else {
            ans++;
        }
    }
    for (int i = y + 1; i < w; ++i) {
        if (s[x][i] == '#') {
            break;
        } else {
            ans++;
        }
    }
    for (int i = y - 1; i >= 0; --i) {
        if (s[x][i] == '#') {
            break;
        } else {
            ans++;
        }
    }
    ans++;
    cout << ans << endl;
}