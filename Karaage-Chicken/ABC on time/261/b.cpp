#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<vector<char>> A(N, vector<char>(N));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (A[i][j] == 'W' && A[j][i] != 'L' || A[i][j] == 'L' && A[j][i] != 'W' || A[i][j] == 'D' && A[j][i] != 'D')
            {
                cout << "incorrect" << endl;
                system("pause");
                return 0;
            }
        }
    }
    cout << "correct" << endl;
    system("pause");
    return 0;
}