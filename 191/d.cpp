#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    long double x, y, r;
    cin >> x >> y >> r;
    r += 1e-14;
    int s = int(ceil(x - r));
    int e = int(floor(x + r));
    //cout << s <<" "<< e << endl;
    ll ans = 0;
    for (int i = s; i <= e; ++i) {
        long double p = sqrt(r * r - (x - i) * (x - i));
        //cout << p << endl;
        int uc = int(floor(p + y));
        int dc = int(ceil(y - p));
        
        for (int j = dc; j <= uc; ++j) {
            ++ans;
        }
    }
    cout << ans <<endl;
}