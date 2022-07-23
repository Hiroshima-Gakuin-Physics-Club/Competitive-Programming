#include <bits/stdc++.h>
const int INF = 1 << 29;

//問題自体はそこまで難しくなさそう
//符号付きint型は４バイトすなわち３２bitなので１bitを符号に使って-２＾３１ ~ ２＾３１まで表現できる
//よって今回long long を使う必要は無かった。
//論理演算について学ぶ必要あり。
using namespace std;

int main()
{
    int N;
    long long X;
    cin >> N >> X;
    for (int i = 0; i < N; i++)
    {
        int T;
        long long A;
        cin >> T >> A;
    }
    system("pause");
    return 0;
}

int calc(int T, int X, int A)
{
    if (T == 1)
    {
        X &= A;
    }
    else if (T == 2)
    {
        X |= A;
    }
    else
    {
        X ^= A;
    }
    return X;
}