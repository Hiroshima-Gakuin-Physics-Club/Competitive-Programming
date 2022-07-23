#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    long long X, A, D, N;
    cin >> X >> A >> D >> N;
    long long mins = A;
    long long maxs = A + D * (N - 1);
    if (mins > maxs)
    {
        swap(mins, maxs);
    }
    if (X <= mins)
    {
        cout << mins - X << endl;
    }
    else if (X >= maxs)
    {
        cout << X - maxs << endl;
    }
    else
    {
        int d = abs(X - A) % abs(D);
        if (d < abs(D) - d)
        {
            cout << d << endl;
        }
        else
        {
            cout << abs(D) - d << endl;
        }
    }
    system("pause");
    return 0;
}