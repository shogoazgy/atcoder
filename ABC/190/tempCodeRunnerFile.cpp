#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<ll> a;
    n *= 2;
    for(ll i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            a.push_back(i);
            if (i != sqrt(n)) a.push_back(n / i);
        }
    }
    ll ans = 0;
    
    for (ll i = 0; i < a.size(); ++i) {
        if ((n / a[i]) % 2 == 0) {
            if (a[i] % 2 == 1) ++ans;
        } else {
            if (a[i] % 2 == 0) ++ans;
        }
    }
    cout << ans << endl;
    

}