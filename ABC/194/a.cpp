#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll a, b;
    cin >> a >> b;
    if (a + b >= 15 && b >= 8) {
        cout << 1 << endl;
    } else if (a + b >= 10 && b >= 3) {
        cout << 2 << endl;
    } else if (a + b >= 3) {
        cout << 3 << endl;
    } else {
        cout << 4 << endl;
    }

}