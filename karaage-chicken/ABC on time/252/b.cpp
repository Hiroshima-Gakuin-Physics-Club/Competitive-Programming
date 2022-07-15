#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    vector<int> B(K);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int m = *max_element(A.begin(), A.end());
    vector<int> p;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == m)
        {
            p.push_back(i);
        }
    }
    for (int i = 0; i < K; i++)
    {
        cin >> B[i];
        for (int j = 0; j < p.size(); j++)
        {
            if (B[i] - 1 == p[j])
            {
                cout << "Yes" << endl;
                system("pause");
                return 0;
            }
        }
    }

    cout << "No" << endl;
    system("pause");
    return 0;
}