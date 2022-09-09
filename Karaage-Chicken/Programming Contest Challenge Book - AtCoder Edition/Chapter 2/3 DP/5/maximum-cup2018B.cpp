#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int N, M, L, X;
    cin >> N >> M >> L >> X;
    vector<int> a(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> a[i];
    }

    vector<vector<int>> dp(N + 1, vector<int>(M, INF)); // i番目まででj番目の休憩所にたどり着ける最小の周回数　(たどり着けないときはINF)
    dp[0][0] = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (dp[i][(j - a[i + 1] % M + M) % M] != INF)
            {
                dp[i + 1][j] = min(dp[i][j], min(dp[i][(j - a[i + 1] % M + M) % M] + (j + a[i + 1]) / M, dp[i + 1][j]));
            }
            else
            {
                dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            }
        }
    }
    if (dp[N][L] <= X)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    system("pause");
    return 0;
}