#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int H, W, R, C;
    cin >> H >> W >> R >> C;
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};

    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        if (C + dx[i] >= 1 && C + dx[i] <= W && R + dy[i] >= 1 && R + dy[i] <= H)
        {
            ++ans;
        }
    }
    cout << ans << endl;
    system("pause");
    return 0;
}