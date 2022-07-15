#include <bits/stdc++.h>
const long double INF = 1 << 29;

using namespace std;

long double distance(pair<int, int> x1, pair<int, int> x2)
{
    return sqrtl(pow(x1.first - x2.first, 2) + pow(x1.second - x2.second, 2));
}

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> A(K);
    vector<int> A1(K);
    for (int i = 0; i < K; i++)
    {
        cin >> A[i];
        A[i] -= 1;
        A1[i] = A[i];
    }
    vector<pair<int, int>> X(N);
    for (int i = 0; i < N; i++)
    {
        cin >> X[i].first;
        cin >> X[i].second;
    }
    long double ans = 0.0;
    for (int i = 0; i < N; i++)
    {
        if (i == A1[0])
        {
            A1.erase(A1.begin());
            continue;
        }
        long double mindis = INF;
        for (int j = 0; j < K; j++)
        {
            mindis = min(mindis, distance(X[i], X[A[j]]));
        }
        ans = max(ans, mindis);
    }

    cout << ans << endl;
    system("pause");
    return 0;
}