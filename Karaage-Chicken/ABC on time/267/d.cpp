#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }

    vector<vector<int>> dp(N + 1, vector<int>(M + 1));
    dp[1][1] = A[1];

    for (int i = 2; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            dp[i][j] =
        }
    }
}