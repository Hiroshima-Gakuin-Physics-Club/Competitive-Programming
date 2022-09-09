#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
const int INF = 1 << 29;

using namespace std;
using Graph = vector<vector<int>>;

int main()
{
    int N, M;
    cin >> N >> M;
    Graph G(N + 1, vector<int>());
    rep(i, M)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<int> n(N);
    rep(i, N)
    {
        n[i] = i + 1;
    }

    int ans = 0;
    do
    {
        // if (find(G[1].begin(), G[1].end(), n[0]) == G[1].end()) continue;ここがN=2の時に間違う
        if (n[0] != 1) continue;

        rep(i, N - 1)
        {
            if (find(G[n[i]].begin(), G[n[i]].end(), n[i + 1]) == G[n[i]].end())
            {
                break;
            }
            if (i == N - 2)
            {
                ++ans;
            }
        }
    } while (next_permutation(n.begin(), n.end()));

    cout << ans << endl;
    system("pause");
    return 0;
}