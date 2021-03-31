#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;

int main() {
    const double PI=3.14159265358979323846;
    double n;
    cin >> n;
    double x0, y0;
    cin >> x0 >> y0;
    double xn, yn;
    cin >> xn >> yn;
    double xa = x0 - (x0 + xn) / 2; 
    double yb = y0 - (y0 + yn) / 2;
    double th = (360 / n * PI / 180);
    double x = cos(th) * xa - sin(th) * yb + (x0 + xn) / 2;
    double y = sin(th) * xa + cos(th) * yb + (y0 + yn) / 2;
    printf("%.11f %.11f", x, y);

}