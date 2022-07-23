#include <iostream>

using namespace std;

int pos[100001][2];
int t[100001];

// iの時にその位置に行くことができるかどうか
bool canReach(int i)
{
    if (i == 0)
    {
        return true;
    }
    int min_dis = abs(pos[i][0] - pos[i - 1][0]) + abs(pos[i][1] - pos[i - 1][1]);
    int tt = t[i] - t[i - 1];
    if (min_dis > tt)
    {
        return false;
    }
    else if ((tt - min_dis) % 2 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    //値を受け取る
    int N;
    cin >> N;
    pos[0][0] = 0;
    pos[0][1] = 0;
    t[0] = 0;
    for (int i = 0; i < N; i++)
    {
        int tt, x, y;
        cin >> tt >> x >> y;
        pos[i + 1][0] = x;
        pos[i + 1][1] = y;
        t[i + 1] = tt;
    }

    //それぞれのiについて調べる
    for (int i = 0; i < N + 1; i++)
    {
        if (!canReach(i))
        {
            cout << "No" << endl;
            system("pause");
            return 0;
        }
    }

    cout << "Yes" << endl;
    system("pause");
    return 0;
}