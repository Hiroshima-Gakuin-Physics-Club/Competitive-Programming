#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    int c = 0;
    int n = 100000;
    for (int i = 0; i < n; i++)
    {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        if (x * x + y * y < 1.0)
        {
            c++;
        }
    }
    double p = (double)c / n * 4.0;
    cout << fixed << setprecision(20) << p << endl;
    system("pause");
    return 0;
}