#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int l1, r1, l2, r2;
    vector<int> n(100, 0);
    cin >> l1 >> r1 >> l2 >> r2;
    for (int i = l1; i < r1; i++)
    {
        n[i] = 1;
    }
    for (int i = l2; i < r2; i++)
    {
        n[i] += 2;
    }
    int ans = 0;
    for (int i = 0; i < 100; i++)
    {
        if (n[i] == 3)
        {
            ans++;
        }
    }

    cout << ans << endl;
    system("pause");
    return 0;
}