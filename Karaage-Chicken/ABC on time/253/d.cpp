#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    long long N, A, B;
    cin >> N >> A >> B;
    long long ans = N * (N + 1) / 2;
    long long mina, maxa, minb, maxb;
    if (N >= A)
    {
        mina = A;
    }
    else
    {
        mina = 0;
    }
    maxa = (N / A) * A;
    if (N >= B)
    {
        minb = B;
    }
    else
    {
        minb = 0;
    }
    maxb = (N / B) * B;
    long long ca, cb;
    ca = maxa / A;
    cb = maxb / B;
    ans -= ca * (mina + maxa) / 2 + cb * (minb + maxb) / 2;
    long long C = lcm(A, B);
    long long minc, maxc, cc;
    if (N >= C)
    {
        minc = C;
    }
    else
    {
        minc = 0;
    }
    maxc = (N / C) * C;
    cc = maxc / C;
    ans += cc * (minc + maxc) / 2;
    cout << ans << endl;
    system("pause");
    return 0;
}