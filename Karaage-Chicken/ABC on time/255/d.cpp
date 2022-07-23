#include <bits/stdc++.h>
const int INF = 1 << 29;
//ほぼ正解
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<long long> A(N);
    vector<long long> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    S[0] = 0;
    for (int i = 0; i < N; i++)
    {
        S[i + 1] = S[i] + A[i];
    }
    for (int i = 0; i < Q; i++)
    {
        long long X;
        cin >> X;
        auto iterl = lower_bound(A.begin(), A.end(), X);
        int c = iterl - A.begin();
        long long ans = 0;
        ans += X * c - S[c];
        ans += S[N] - S[c] - X * (N - c);
        cout << ans << endl;
    }
    system("pause");
    return 0;
}