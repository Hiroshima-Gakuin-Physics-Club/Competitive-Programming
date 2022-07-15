#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    long long N, K;
    cin >> N >> K;
    vector<long long> a(N);
    for (long long i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    vector<vector<long long>> A;
    for (long long i = 0; i < K; i++)
    {
        vector<long long> b;
        for (long long j = 0; i + j * K < N; j++)
        {
            b.push_back(a[i + j * K]);
        }
        sort(b.begin(), b.end());
        A.push_back(b);
    }
    long long p = A[0][0];
    for (long long i = 1; i < N; i++)
    {
        long long c = i % K;
        long long n = i / K;
        if (p > A[c][n])
        {
            cout << "No" << endl;
            system("pause");
            return 0;
        }
        p = A[c][n];
    }
    cout << "Yes" << endl;
    system("pause");
    return 0;
}