#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    int ans = INF;
    for (int i = 0; i < 10; i++)
    {
        vector<int> p(N);
        for (int j = 0; j < N; j++)
        {
            p[j] = S[j].find('0' + i);
        }
        int t = 1;
        for (int j = 0; j < 10; j++)
        {
            int ct = count(p.begin(), p.end(), j);
            t = max(t, ct);
        }
        for (int j = 9; j >= 0; j--)
        {
            int c = count(p.begin(), p.end(), j);
            if (c == t)
            {
                int r = 10 * (t - 1) + j;
                ans = min(ans, r);
                break;
            }
        }
    }
    cout << ans << endl;
    system("pause");
    return 0;
}