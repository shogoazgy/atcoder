#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll tmp = 0;
    ll a[n], b[n];
    rep (i, n) {
        cin >> a[i];
    }
    rep (i, n) {
        cin >> b[i];
    }
    rep (i, n) {
        tmp += a[i] * b[i]; 
    }
    //cout << tmp << endl;
    if (tmp == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}