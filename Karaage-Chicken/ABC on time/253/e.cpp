#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;
// dp + 累積和 惜しかった
int main()
{
    vector<vector<int>> dp;
    int N, M, K;
    cin >> N >> M >> K;
    dp.assign(N + 1, vector<int>(M + 1, -1));
    for (int i = 1; i <= M; i++)
    {
        dp[1][i] = 1;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
        }
    }
}