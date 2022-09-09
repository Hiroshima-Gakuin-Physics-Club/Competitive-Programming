#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> X(N);
    int mn = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
        mn = max(mn, X[i]);
    }
    int ans = INF;
    for (int i = 1; i <= mn; i++)
    {
        int s = 0;
        for (int j = 0; j < N; j++)
        {
            s += (X[j] - i) * (X[j] - i);
        }
        ans = min(ans, s);
    }
    cout << ans << endl;
    system("pause");
    return 0;
}