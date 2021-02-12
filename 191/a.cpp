#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll v, t, s, d;
    cin >> v >> t >> s >> d;
    ll st = v * t;
    ll ls = v * s;
    if (st <= d && ls >= d) {
        cout << "No" << endl;
    } else {
        cout << "Yes" <<endl;
    }

}