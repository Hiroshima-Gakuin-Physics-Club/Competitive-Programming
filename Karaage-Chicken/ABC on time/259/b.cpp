#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;
//小数点の桁数の精度の上げ方を知らなかった。 fixed setprecision
int main()
{
    int a, b, d;
    cin >> a >> b >> d;
    long double c;
    c = d * M_PI / 180;

    long double x = a * cosl(c) - b * sinl(c);
    long double y = a * sinl(c) + b * cosl(c);
    cout << fixed << setprecision(20) << x << " " << y << endl;
    system("pause");
    return 0;
}