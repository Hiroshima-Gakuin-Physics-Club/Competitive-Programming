#include <bits/stdc++.h>

using namespace std;

double dp[101][101][101][101];

int main()
{
    int N;
    long long D;
    cin >> N >> D;
    int p2 = 0, p3 = 0, p5 = 0;
    while (D % 2 == 0)
    {
        D /= 2;
        p2++;
    }
    while (D % 3 == 0)
    {
        D /= 3;
        p3++;
    }
    while (D % 5 == 0)
    {
        D /= 5;
        p5++;
    }

    if (D != 1)
    {
        cout << 0 << endl;
        system("pause");
        return 0;
    }

    int d2[6] = {0, 1, 0, 2, 0, 1};
    int d3[6] = {0, 0, 1, 0, 0, 1};
    int d5[6] = {0, 0, 0, 0, 1, 0};

        dp[0][0][0][0] = 1;

    for (int i = 0; i < N; i++)
    {
        for (int c2 = 0; c2 <= p2; c2++)
        {
            for (int c3 = 0; c3 <= p3; c3++)
            {
                for (int c5 = 0; c5 <= p5; c5++)
                {
                    for (int j = 0; j < 6; j++)
                    {
                        int n2 = min(p2, c2 + d2[j]);
                        int n3 = min(p3, c3 + d3[j]);
                        int n5 = min(p5, c5 + d5[j]);
                        dp[i + 1][n2][n3][n5] += dp[i][c2][c3][c5] / 6;
                    }
                }
            }
        }
    }

    cout << dp[N][p2][p3][p5] << endl;
    system("pause");
    return 0;
}