#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
const int INF = 1 << 29;

using namespace std;

int main()
{
    int N;
    cin >> N;
    bitset<4000001> b;
    b.set(0);
    int sum = 0;
    rep(i, N)
    {
        int a;
        cin >> a;
        sum += a;
        b |= (b << a);
    }

    int ans = -1;
    int j = (sum + 1) / 2;
    while (ans == -1)
    {
        if (b[j] == 1) ans = j;
        j++;
    }

    cout << ans << endl;
    system("pause");
    return 0;
}