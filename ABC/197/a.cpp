#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;
    char a = s[0];
    s[0] = s[1];
    s[1] = s[2];
    s[2] = a;
    cout << s << endl;
}