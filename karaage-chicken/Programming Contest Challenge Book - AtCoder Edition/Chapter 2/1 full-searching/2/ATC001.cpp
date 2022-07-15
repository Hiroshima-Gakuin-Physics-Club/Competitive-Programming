#include <iostream>
#include <stack>
#include <utility>

using namespace std;
//多次元配列には気をつけろ
//特にstack vector などでtype を指定するときにはint[]はダメ
//二値管理はpairが便利
int main()
{
    int H, W;
    cin >> H >> W;
    char c[H][W];
    bool field[H][W];
    stack<pair<int, int>> st;
    int gh, gw;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> c[i][j];
            field[i][j] = 0;
            if (c[i][j] == 's')
            {
                st.push(make_pair(i, j));
            }
            if (c[i][j] == 'g')
            {
                gh = i;
                gw = j;
            }
        }
    }
    int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    while (!st.empty())
    {
        int h = st.top().first, w = st.top().second;
        st.pop();
        field[h][w] = 1;
        for (int i = 0; i < 4; i++)
        {
            int nh = h + dir[i][0], nw = w + dir[i][1];
            if (nh >= 0 && nh < H && nw >= 0 && nw < W && field[nh][nw] == 0 && c[nh][nw] != '#')
            {
                st.push(make_pair(nh, nw));
            }
        }
    }

    if (field[gh][gw] == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    system("pause");
    return 0;
}