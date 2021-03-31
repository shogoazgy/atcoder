#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;
    ll n;
    n = s.size();
    ll a = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '.') {
            a = i;
        }
    }
    if (a == -1) {
        for (int i = 0; i < n; ++i) {
            cout << s[i];
        }
        cout << endl;
    } else {
        for (int i = 0; i < a; ++i) {
            cout << s[i];
        }
        cout << endl;
    }
}