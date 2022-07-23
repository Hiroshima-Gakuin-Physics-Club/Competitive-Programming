#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int N, M, X, T, D;
    cin >> N >> M >> X >> T >> D;
    int ans = 0;
    if (M >= X)
    {
        ans = T;
    }
    else
    {
        ans = T - D * (X - M);
    }
    cout << ans << endl;
    system("pause");
    return 0;
}