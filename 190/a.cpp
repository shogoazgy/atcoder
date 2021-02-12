#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >>c;
    int tmp = a-b;
    if (c) {
        if (tmp >= 0) {
            cout << "Takahashi" << endl;
        } else {
            cout << "Aoki" << endl;
        }
    } else {
        if (tmp > 0) {
            cout << "Takahashi" << endl;
        } else {
            cout << "Aoki" << endl;
        }
    }

}