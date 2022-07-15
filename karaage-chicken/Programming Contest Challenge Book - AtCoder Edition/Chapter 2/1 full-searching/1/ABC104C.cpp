#include <bits/stdc++.h>

using namespace std;
//再帰型なので重すぎた　完答ボーナスもらうかどうかでビット探索をする

int D, G;
int p[10], c[10];

int min_count(int i, int g)
{
    int res_g[p[i] + 1];
    int checker = -1;
    for (int t = p[i]; t >= 0; t--)
    {
        if (t == p[i])
        {
            res_g[t] = g - t * (i + 1) * 100 - c[i];
        }
        else
        {
            res_g[t] = g - t * (i + 1) * 100;
        }
        if (res_g[t] <= 0)
        {
            checker = t;
        }
    }
    if (i == 0)
    {
        if (checker == -1)
        {
            return 1000000;
        }
        else
        {
            return checker;
        }
    }
    int res = 1000000;
    for (int t = 0; t <= p[i]; t++)
    {
        res = min(t + min_count(i - 1, res_g[t]), res);
    }
    return res;
}

int main()
{
    cin >> D >> G;
    for (int i = 0; i < D; i++)
    {
        cin >> p[i] >> c[i];
    }

    cout << min_count(D - 1, G) << endl;
    system("pause");
    return 0;
}