#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    ll dp[n + 1][2];
    dp[0][0] = 1;
    dp[0][1] = 1;
    rep(i, n) {
        string s;
        cin >> s;
        if (s == "AND"){
            dp[i + 1][1] = dp[i][1];
            dp[i + 1][0] = 2 * dp[i][0] + dp[i][1];
        } else {
            dp[i + 1][1] = dp[i][0] + 2 * dp[i][1];
            dp[i + 1][0] = dp[i][0];
        }
    }
    cout << dp[n][1] << endl; 
}