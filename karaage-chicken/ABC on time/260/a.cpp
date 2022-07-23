#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    string S;
    cin >> S;
    for (int i = 0; i < 3; i++)
    {
        char ans = S[i];
        for (int j = 0; j < 3; j++)
        {
            if (i != j && ans == S[j])
            {
                ans = -1;
                break;
            }
        }
        if (ans != -1)
        {
            cout << ans << endl;
            system("pause");
            return 0;
        }
    }
    cout << -1 << endl;
    system("pause");
    return 0;
}