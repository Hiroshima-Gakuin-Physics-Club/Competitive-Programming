#include <bits/stdc++.h>
long long INF = 1 << 30;

using namespace std;
//インデックスを工夫して計算量を抑える
//最小の勝利数でDP
//難し

int main()
{
    int N;
    long long K;
    cin >> N >> K;
    vector<vector<long long>> dp;
    dp.assign(N + 1, vector<long long>(N + 1, INF));
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        dp[i][0] = 0;
    }
    dp[N][0] = 0;
    long long s = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            dp[i + 1][j + 1];
        }
    }
}