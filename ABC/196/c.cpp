#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main(void) {
    string s;
    cin >> s;
    int n = s.size();
    if (n == 1) {
        cout << 0 << endl;
    } else if (n % 2 == 1) {
        n--;
        while (1) {
            if (n == 0) {
                break;
            }
            n = n - 2;
            cout << 9;
        }
        cout << endl;
    } else {
        ll ans = 0;
        int t = n - 2;
        int b = 1;
        while (1) {
            if (t == 0) {
                break;
            }
            t = t - 2;
            ans += b*9;
            b *= 10;
        }
        string s1 = s.substr(0, n/2);
        //cout << s1 << endl;
        string s2 = s.substr(n/2);
        //cout << s2 << endl;
        ll z = 1;
        int tt = n / 2 - 1;
        while (1) {
            if (tt == 0) {
                break;
            }
            tt--;
            z *= 10;
        }
        
        ll x = stoll(s1);
        ll y = stoll(s2);
        
        while (1) {
            if (z > x) {
                break;
            }
            //cout << z << endl;
            if (z == x) {
                if (y < z) {
                    break;
                }
            }
            ans++;
            z += 1;
        }
        /*
       cout << y << endl;
       if (x > y) {
           ans = ans + y;
       } else {
           ans = ans + x - z + 1;
       }
       */
        cout << ans << endl;
    }
}