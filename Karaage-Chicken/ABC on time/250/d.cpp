#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

std::vector<long long> Eratosthenes(const long long N)
{
    std::vector<bool> is_prime(N + 1);
    for (long long i = 0; i <= N; i++)
    {
        is_prime[i] = true;
    }
    std::vector<int> P;
    for (long long i = 2; i <= N; i++)
    {
        if (is_prime[i])
        {
            for (long long j = 2 * i; j <= N; j += i)
            {
                is_prime[j] = false;
            }
            P.emplace_back(i);
        }
    }
    return P;
}
int main()
{
    long long N;
    cin >> N;
    long long ans = 0;
    for (int i = 3; i * i * i < N; i++)
    {
        long long
    }

    for (const auto &x : Eratosthenes(floor(pow(N, 1.0 / 3.0))))
    {
        for (i = 0; i < count; i++)
        {
            /* code */
        }
    }
    return 0;
}