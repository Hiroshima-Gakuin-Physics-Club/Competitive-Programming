#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
const int INF = 1 << 29;

using namespace std;

int main()
{
    int N;
    cin >> N;
    set<int> s;
    rep(i, N)
    {
        int d;
        cin >> d;
        s.insert(d);
    }

    cout << s.size() << endl;
    system("pause");
    return 0;
}