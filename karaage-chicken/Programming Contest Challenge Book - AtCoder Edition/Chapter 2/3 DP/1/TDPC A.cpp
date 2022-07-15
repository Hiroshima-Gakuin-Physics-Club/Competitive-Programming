#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int p[N];
    int W = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> p[i];
        W += p[i];
    }
    vector<vector<int>> dp;
    dp.assign(N + 1, vector<int>(W + 1, 0));
    dp[0][0] = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (j < p[i])
            {
                dp[i + 1][j] = dp[i][j];
            }
            else
            {
                dp[i + 1][j] = dp[i][j - p[i]] | dp[i][j]; //ここを+にすると数の組み合わせではなく全ての足し算の組み合わせ（N**2）がでる
            }
        }
    }
    cout << accumulate(dp[N].begin(), dp[N].end(), 0) << endl;
    system("pause");
    return 0;
}