#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;
    
    for (int i = 0; i < k; ++i) {
        vector<ll> a;
        while(1) {
            ll x;
            x = n % 10;
            //cout << n << endl;
            //cout << x << endl;
            n /= 10;
            
            a.push_back(x);
            //cout << x << endl;
            if (n < 1) {
                //cout << n << endl;
                break;
            }
        }
        sort(a.begin(), a.end());
        int b = a.size();
        //cout << b << "a" << endl;
        int c = 0;
        int d = 0;
        for (int i = 0; i < b; ++i) {
            int w = i;
            ll tmp = a[i];
            while(1) {
                if (w == 0) {
                    break;
                }
                w--;
                tmp *= 10;
            }
            //cout << tmp << endl;
            c += tmp;
        }
        sort(a.rbegin(), a.rend());
        
        for (int i = b - 1; i >= 0 ; --i) {
            int w = i;
            ll tmp = a[i];
            while(1) {
                if (w == 0) {
                    //cout << "as" << endl;
                    break;
                }
                w--;
                tmp *= 10;
            }
            d += tmp;
        }
        n = c - d;
        //cout << d << endl;
        //cout << c << endl;
        //cout << n << endl;
    }
    cout << n << endl;

}