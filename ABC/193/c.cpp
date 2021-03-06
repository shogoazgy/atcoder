#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;



int main() {
    ll n;
    cin >> n;
    set<ll> s;
    for (ll i = 2; i * i <= n; ++i) {
        ll t = i * i;
        while (t <= n) {
            s.insert(t);
            t *= i;
        }
    }
    cout << n - s.size() << endl;
}