#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll a, b, w;
    cin >> a >> b >> w;
    ll x = 1000 * w / a;
    ll y = 1000 * w / b;
    if (y * b!= 1000 * w) {
        y += 1;
    }
    if (x < y) {
        cout << "UNSATISFIABLE" << endl;
    } else {
        cout << y << " " << x << endl;
    }
    
    
}