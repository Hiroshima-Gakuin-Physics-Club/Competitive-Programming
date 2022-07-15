#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int b = 0; // white
    char color[2] = {'.', '#'};
    for (int i = 0; i < N * A; i++)
    {
        for (int j = 0; j < N * B; j++)
        {

            cout << color[(j / B + i / A) % 2];
        }
        cout << endl;
    }

    system("pause");
    return 0;
}