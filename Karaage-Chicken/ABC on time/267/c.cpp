#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
const int INF = 1 << 29;

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<long long> a(N);
    rep(i, N) cin >> a[i];

    long long now = 0;
    long long s = 0;
    rep(i, M)
    {
        now += a[i] * (i + 1);
        s += a[i];
    }

    long long ans = now;

    rep(i, N)
    {
        int y = i + M;
        if (y >= N) break;
        now -= s;
        now += a[y] * M; // aがintだとここでオーバーフロー起こすかも
        s -= a[i];
        s += a[y];
        ans = max(ans, now);
    }

    cout << ans << endl;
    system("pause");
    return 0;
}