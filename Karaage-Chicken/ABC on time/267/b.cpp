#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    string S;
    cin >> S;
    vector<vector<char>> L(7, vector<char>(2, '2'));
    L[3][0] = S[0];
    L[2][0] = S[1];
    L[4][0] = S[2];
    L[1][0] = S[3];
    L[3][1] = S[4];
    L[5][0] = S[5];
    L[0][0] = S[6];
    L[2][1] = S[7];
    L[4][1] = S[8];
    L[6][0] = S[9];
    string ans = "No";
    if (L[3][0] == '0')
    {
        for (int i = 2; i < 7; i++)
        {
            for (int j = 0; j <= i - 2; j++)
            {
                if ((L[i][0] == '1' || L[i][1] == '1') && (L[j][0] == '1' || L[j][1] == '1'))
                {
                    for (int s = j + 1; s <= i - 1; s++)
                    {
                        if (L[s][0] == '0' && L[s][1] != '1')
                        {
                            ans = "Yes";
                        }
                    }
                }
            }
        }
    }

    cout << ans << endl;
    system("pause");
    return 0;
}