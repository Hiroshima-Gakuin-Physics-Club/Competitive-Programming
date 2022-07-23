#include <bits/stdc++.h>

using namespace std;

//貰うDPだと降順にしろ昇順にしろ体力が０より小さい、あるいは上限を超えた所の遷移ができないので無理
//配るDPにして遷移を考える

int main()
{
    const int INF = 100000000;
    int H, N;
    cin >> H >> N;
    vector<int> A(N);
    vector<int> B(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i] >> B[i];
    }

    vector<vector<int>> dp; // i番目の魔法までをつかって体力jの時に消費する最小の魔力
    dp.assign(N + 1, vector<int>(H + 1, INF));
    dp[0][H] = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = H; j >= 0; j--)
        {
            dp[i + 1][j] = dp[i][j];
            dp[i][max(0, j - A[i])] = min(dp[i][j] + B[i], dp[i][max(0, j - A[i])]);
        }
    }

    cout << dp[N][0] << endl;
    system("pause");
    return 0;
}