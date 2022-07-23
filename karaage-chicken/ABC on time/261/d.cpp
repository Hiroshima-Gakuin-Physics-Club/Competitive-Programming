#include <bits/stdc++.h>
const int INF = 1 << 29;

//惜しくも時間切れ
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<vector<long long>> dp(N + 1, vector<long long>(N + 1, -1));
    vector<long long> X(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> X[i];
    }
    map<int, long long> cy;
    vector<int> C(M);
    for (int i = 0; i < M; i++)
    {
        int c;
        long long y;
        cin >> c >> y;
        C[i] = c;
        cy[c] = y;
    }
    dp[0][0] = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            if (i < j)
            {
                continue;
            }
            dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + X[i + 1] + cy[j + 1]);
            dp[i + 1][0] = max(dp[i + 1][0], dp[i][j] + cy[0]);
        }
    }
    long long ans = 0;
    for (int i = 0; i <= N; i++)
    {
        ans = max(ans, dp[N][i]);
    }
    cout << ans << endl;
    system("pause");
    return 0;
}