#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;
//負の数もアリ ansの初期値はマイナス無限大
//オーバーフローが原因でした
random_device rnd;

void random_generate(int &N, int &M, vector<int> &a)
{
    mt19937 mt(rnd());
    N = 1;
    M = mt() % N + 1;
    a.assign(N, 0);
    for (int i = 0; i < N; i++)
    {
        if (mt() % 2 == 0)
        {
            a[i] = mt() % (2 * 100000 + 1);
        }
        else
        {
            a[i] = -mt() % (2 * 100000 + 1);
        }
    }
}

long long solve(int N, int M, vector<int> a)
{
    vector<long long> s(N + 1, 0);
    for (int i = 0; i < N; i++)
    {
        s[i + 1] = s[i] + a[i];
    }

    long long ans = -INF;
    long long su = 0;
    for (int i = 0; i < M; i++)
    {
        su += (i + 1) * a[i];
    }
    ans = su;

    for (int i = M; i < N; i++)
    {
        su = su - (s[i] - s[i - M]) + M * a[i];
        ans = max(ans, su);
    }

    return ans;
}

long long solve_Jury(int N, int M, vector<int> a)
{
    long long ans = -INF;
    long long sum = 0;
    for (int i = 0; i < M; i++)
    {
        sum += (i + 1) * a[i];
    }
    ans = sum;

    for (int i = M; i < N; i++)
    {
        sum = 0;
        for (int j = i; j >= i - M + 1; j--)
        {
            sum += (M - (i - j)) * a[j];
        }
        ans = max(ans, sum);
    }

    return ans;
}

int main()
{
    /**
    int N, M;
    cin >> N >> M;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    **/
    for (int i = 0; i < 1000; i++)
    {
        int N, M;
        vector<int> a;
        random_generate(N, M, a);
        int J1 = solve(N, M, a);
        int J2 = solve_Jury(N, M, a);

        cout << J1 << " " << J2 << endl;
        if (J1 != J2)
        {
            cout << "Wrong Answer on Test #" << i << endl;
            cout << "Jury = " << J2 << ", Output = " << J1 << endl;
            // 誤答ケースの出力
            cout << N << endl;
            cout << M << endl;
            for (int t = 0; t < N; t++)
            {
                if (t >= 1)
                {
                    cout << " ";
                }
                cout << a[t];
            }
            cout << endl;
            system("pause");
            return 0;
        }
    }

    cout << "Yay!" << endl;
    system("pause");
    return 0;
}