#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    long double r, x, y;
    cin >> r >> x >> y;
    long double u = sqrt(x*x + y*y);
    ll a = ceil(u/r);
    if (a == 1 && u != r) {
        cout << 2 << endl;
    }
    else {
        cout << a << endl;
    }
    

}