#include <bits/stdc++.h>

using namespace std;

// bit全探索 制約から解けた

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f)
{
    if (rest == 0)
    {
        f(indexes);
    }
    else
    {
        if (s < 0)
            return;
        recursive_comb(indexes, s - 1, rest, f);
        indexes[rest - 1] = s;
        recursive_comb(indexes, s - 1, rest - 1, f);
    }
}

// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k, std::function<void(int *)> f)
{
    int indexes[k];
    recursive_comb(indexes, n - 1, k, f);
}

int main()
{
    int N, K;
    cin >> N >> K;
    vector<string> S;
    S.resize(N);
    map<char, vector<int>> abc;
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
        for (int j = 0; j < S[i].size(); j++)
        {
            abc[S[i][j]].push_back(i);
        }
    }
    int ans = 0;
    for (auto i = abc.begin(); i != abc.end(); i++)
    {
        if (i->second.size() < K)
        {
            continue;
        }
        foreach_comb(i->second.size(), K, [](int *indexes)
                     { stcout << indexes[0] << ',' << indexes[1] << ',' << indexes[2] << std::endl; });
        cout << i->first << i->second << endl;
    }
    system("pause");
}