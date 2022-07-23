#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, W;
    cin >> N >> W;
    vector<int> v, w;
    v.resize(N);
    w.resize(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i] >> w[i];
    }
    vector<vector<int>> dp;
    dp.assign(N + 1, vector<int>(W, 0));
    for (int i = 0; i < N; i++)
    {
        for (int t = 0; t <= W; t++)
        {
            if (t < w[t])
            {
                dp[i + 1][t] = dp[i][t];
            }
            else
            {
                dp[i + 1][t] = max(dp[i][t], dp[i][t - w[i]] + v[i]);
            }
        }
    }
    cout << dp[N][W] << endl;
    system("pause");
    return 0;
}