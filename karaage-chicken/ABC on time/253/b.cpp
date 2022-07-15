#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    int a[2] = {INF, INF};
    for (int i = 0; i < H; i++)
    {
        cin >> S[i];
        for (int j = 0; j < W; j++)
        {
            if (S[i][j] == 'o' && a[0] == INF)
            {
                a[0] = i;
                a[1] = j;
            }
            else if (S[i][j] == 'o' && a[0] != INF)
            {
                cout << abs(a[0] - i) + abs(a[1] - j) << endl;
                system("pause");
                return 0;
            }
        }
    }
}