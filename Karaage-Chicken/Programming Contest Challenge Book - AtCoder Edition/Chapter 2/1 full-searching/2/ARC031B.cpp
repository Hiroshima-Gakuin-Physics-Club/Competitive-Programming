#include <bits/stdc++.h>

using namespace std;

vector<vector<char>> A;
int field[10][10];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

void search(int x, int y, int n)
{
    field[x][y] = n;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= 10 || ny < 0 || ny >= 10 || field[nx][ny] != -1 || A[nx][ny] == 'x')
        {
            continue;
        }

        search(nx, ny, n);
    }
}

int main()
{
    A.resize(10, vector<char>(10));
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> A[i][j];
            field[i][j] = -1;
        }
    }

    //島に番号をつける
    int c = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (A[i][j] == 'o' && field[i][j] == -1)
            {
                ++c;
                search(i, j, c - 1);
            }
        }
    }

    if (c > 4)
    {
        cout << "NO" << endl;
        system("pause");
        return 0;
    }
    else if (c == 1)
    {
        cout << "YES" << endl;
        system("pause");
        return 0;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (A[i][j] == 'x')
            {
                bool island[c];
                for (int g = 0; g < c; g++)
                {
                    island[g] = false;
                }
                for (int t = 0; t < 4; t++)
                {

                    int nx = i + dx[t];
                    int ny = j + dy[t];
                    if (nx < 0 || nx >= 10 || ny < 0 || ny >= 10 || A[nx][ny] == 'x')
                    {
                        continue;
                    }

                    island[field[nx][ny]] = true;
                }

                for (int g = 0; g < c; g++)
                {
                    if (!island[g])
                    {
                        break;
                    }
                    if (g == c - 1)
                    {
                        cout << "YES" << endl;
                        system("pause");
                        return 0;
                    }
                }
            }
        }
    }

    cout << "NO" << endl;
    system("pause");
    return 0;
}