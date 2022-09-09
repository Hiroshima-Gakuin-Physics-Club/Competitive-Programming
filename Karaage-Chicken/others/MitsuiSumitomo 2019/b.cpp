#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;
//正解は全探索
int main()
{
    int N;
    int X;
    cin >> N;
    X = N / 1.08;
    if (floor(X * 1.08) == N) //整数の場合
    {
        cout << X << endl;
    }
    else if (floor((X + 1) * 1.08) == N) //小数の場合
    {
        cout << X + 1 << endl;
    }
    else
    {
        cout << ":(" << endl; //スキップされた場合
    }
    system("pause");
    return 0;
}