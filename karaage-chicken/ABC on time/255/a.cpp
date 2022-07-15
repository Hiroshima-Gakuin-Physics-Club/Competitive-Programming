#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;

    int A[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> A[i];
    }
    int ans;
    switch (R + C)
    {
    case 2:
        ans = A[0];

        break;

    case 4:
        ans = A[3];
        break;
    case 3:
        if (R == 1)
        {
            ans = A[1];
        }
        else
        {
            ans = A[2];
        }
        break;
    }
    cout << ans << endl;
    system("pause");
    return 0;
}