#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
const int INF = 1 << 29;

using namespace std;

int main()
{
    int N, M;
    cin >> N;
    map<string, int> s;
    rep(i, N)
    {
        string inp;
        cin >> inp;
        s[inp] += 1;
    }
    cin >> M;
    map<string, int> t;
    rep(i, M)
    {
        string inp;
        cin >> inp;
        t[inp] += 1;
    }

    vector<int> a;
    for (auto ite = s.begin(); ite != s.end(); ite++)
    {
        a.push_back(ite->second - t[ite->first]);
    }
    sort(a.begin(), a.end(), greater<int>{});

    cout << max(a[0], 0) << endl;
    system("pause");
    return 0;
}