#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    string n;
    cin >> n;
    int x = n.size();
    for (int i = n.size() - 1; i >= 0; --i) {
        if (n[i] != '0') {
            x = i;
            break;
        }
    }
    n = n.substr(0, x + 1);
    string m = n;
    reverse(n.begin(), n.end());
    if (n == m) {
        cout << "Yes" << endl;
    } else {  
        cout << "No" << endl;
    }

}