#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A1;
    vector<int> A2;
    A1.push_back(1);
    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            cout << 1 << endl;
            continue;
        }
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
            {
                A2.push_back(1);
                cout << 1;
                if (j == 0)
                {
                    cout << " ";
                }
                continue;
            }
            A2.push_back(A1[j - 1] + A1[j]);
            cout << A2[j] << " ";
        }
        cout << endl;
        A1.clear();
        for (int j = 0; j < A2.size(); j++)
        {
            A1.push_back(A2[j]);
        }
        A2.clear();
    }
    system("pause");
    return 0;
}