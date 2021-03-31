#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x, y;
    if (a >= b) {
        x = a;
    } else {
        x = b;
    } 
    if (c >= d) {
        y = d;
    } else {
        y = c;
    }
    cout << x - y << endl;
}