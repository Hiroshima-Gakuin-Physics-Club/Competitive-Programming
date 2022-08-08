#include <bits/stdc++.h>
long long INF = 1 << 30;

using namespace std;
//インデックスを工夫して計算量を抑える
// dp[i][j] = i日目までで機嫌がいい日がj日である最小の勝利数
//コーナーケースが難しい

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
    }
    dp[1][0] = 0;
    dp[1][1] = 1;
    long long s = a[0];

    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            dp[i + 1][j + 1] = min(dp[i][j + 1], dp[i][j] + dp[i][j] * a[i] / s + 1);
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
        }
        s += a[i];
    }

    if (s == 0)
    {
        cout << 0 << endl;
    }
    else if (s == K)
    {
        cout << 1 << endl;
    }
    else
    {
        for (int i = N; i >= 0; i--)
        {
            if (dp[N][i] <= K)
            {
                cout << i << endl;
                system("pause");
                return 0;
            }
        }
        cout << 0 << endl;
    }
    system("pause");
    return 0;
}