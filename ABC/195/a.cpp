#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll h, m;
    cin >> m >> h;
    if (h % m == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}