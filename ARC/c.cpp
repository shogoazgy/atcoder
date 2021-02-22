#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int dfs(int x, vector<vector<int>>& a, vector<int>& b, int& ans, int& c) {
    //cout << c << " " << ans << endl;
    cout << x << endl;
    if (b[x] == 1) {
        b[x] = 0;
        if (c % 2 == 0) {
            ++ans;
        }
        ++c;
    }
    for (auto t : a[x]) {
        if (b[t] == 1) {
            ++c;
            dfs(t, a, b, ans, c);
            ++c;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n + 1);
    vector<int> b(n + 1, 1);
    for (int i = 2; i <= n; ++i) {
        int tmp;
        cin >> tmp;
        a[tmp].push_back(i);
    }
    int ans = 0;
    int c = 0;
    dfs(1, a, b, ans, c);
    cout << ans << endl;
    return 0;
}