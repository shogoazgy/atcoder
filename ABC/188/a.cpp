#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    int x, y;
    cin >> x >> y;
    if (x > y) {
        if (y + 3 > x) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        if (x + 3 > y) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}