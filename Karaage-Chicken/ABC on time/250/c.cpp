#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    map<int, int> a; // key 数 value 位置
    map<int, int> b; // key pos value num
    for (int i = 1; i <= N; i++)
    {
        a.insert(make_pair(i, i));
        b.insert(make_pair(i, i));
    }
    int x;
    for (int i = 0; i < Q; i++)
    {
        cin >> x;
        if (a[x] == N)
        {
            swap(a[b[N - 1]], a[x]);
            swap(b[N - 1], b[N]);
        }
        else
        {
            int a1 = a[x];
            swap(a[x], a[b[a[x] + 1]]);
            swap(b[a1], b[a1 + 1]);
        }
    }
    for (int i = 1; i <= N; i++)
    {
        cout << b[i];
        if (i == N)
        {
            cout << endl;
        }
        else
        {
            cout << " ";
        }
    }
    system("pause");
    return 0;
}