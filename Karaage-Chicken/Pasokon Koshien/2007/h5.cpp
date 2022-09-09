#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
const int INF = 1 << 29;

using namespace std;

int main()
{
    int table[1000001];
    table[0] = 0;
    table[1] = 1;
    for (int i = 2; i <= 1000000; i++)
    {
        int tmp = i;
        while (tmp % 2 == 0)
        {
            tmp /= 2;
        }
        while (tmp % 3 == 0)
        {
            tmp /= 3;
        }
        while (tmp % 5 == 0)
        {
            tmp /= 5;
        }

        if (tmp == 1)
        {
            table[i] = table[i - 1] + 1;
        }
        else
        {
            table[i] = table[i - 1];
        }
    }

    while (true)
    {
        int n, m;
        cin >> m >> n;
        if (m == 0) break;

        cout << table[n] - table[m - 1] << endl;
    }

    system("pause");
    return 0;
}