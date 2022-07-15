#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int Q;
    cin >> Q;
    map<long long, int> D;
    for (int i = 0; i < Q; i++)
    {
        int type;
        long long x;
        cin >> type;
        switch (type)
        {
        case 1:
            cin >> x;
            D[x] += 1;
            break;

        case 2:
            int c;
            cin >> x >> c;
            D[x] -= min(c, D[x]);
            if (D[x] == 0)
            {
                D.erase(x);
            }
            break;
        case 3:
            long long minv = D.begin()->first;
            long long maxv = D.rbegin()->first;
            cout << maxv - minv << endl;
            break;
        }
    }
    system("pause");
    return 0;
}