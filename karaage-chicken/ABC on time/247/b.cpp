#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> s, t;
    for (int i = 0; i < N; i++)
    {
        s.push_back("");
        t.push_back("");
        cin >> s[i] >> t[i];
    }

    for (int i = 0; i < N; i++)
    {
        bool res = true;
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                continue;
            }

            if (s[i] == s[j] || s[i] == t[j])
            {
                res = false;
                break;
            }
        }
        if (res)
        {
            continue;
        }
        res = true;
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                continue;
            }

            if ((t[i] == s[j] || t[i] == t[j]))
            {
                res = false;
                break;
            }
        }
        if (!res)
        {
            cout << "No" << endl;
            system("pause");
            return 0;
        }
    }

    cout << "Yes" << endl;
    system("pause");
    return 0;
}