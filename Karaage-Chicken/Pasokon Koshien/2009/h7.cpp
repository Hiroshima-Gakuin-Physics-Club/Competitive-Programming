#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
const int INF = 1 << 29;

using namespace std;

int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0) break;

        vector<pair<long long, long long>> d(n);
        long long sum = 1;
        rep(i, n)
        {
            cin >> d[i].first >> d[i].second;
            sum *= d[i].second;
        }

        stack<long long> s;
        rep(i, n)
        {
            s.push(sum / d[i].second * d[i].first)
        }

        while (s.size() == 1)
        {
            long long tmp1, tmp2;
            tmp1 = s.top();
            s.pop();
            tmp2 = s.top();
            s.pop();
            s.push(__gcd(tmp1, tmp2));
        }
        long long k = s.top();

        rep(i, n)
        {
        }
    }
}