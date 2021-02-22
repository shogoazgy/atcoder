#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;
    int f = 0;
    int n = s.length();
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            if (isupper(s[i])) {
                f = 1;
            }
        } else {
            if (!isupper(s[i])) {
                f = 1;
            }
        }
    }
    if(f) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}