#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int N;
    cin >> N;
    unordered_map<string, int> n;
    for (int i = 0; i < N; i++)
    {
        string inp;
        cin >> inp;
        n[inp] += 1;
        if (n[inp] == 1)
        {
            cout << inp << endl;
        }
        else
        {
            cout << inp + "(" << n[inp] - 1 << ")" << endl;
        }
    }
    system("pause");
    return 0;
}