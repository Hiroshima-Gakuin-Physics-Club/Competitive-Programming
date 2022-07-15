#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    cin >> S;
    bool ans = false;
    for (int i = 0; i < S.size(); i++)
    {
        if (islower(S[i]))
        {
            ans = true;
            break;
        }
    }
    if (!ans)
    {
        cout << "No" << endl;
        system("pause");
        return 0;
    }
    ans = false;
    for (int i = 0; i < S.size(); i++)
    {
        if (isupper(S[i]))
        {
            ans = true;
            break;
        }
    }
    if (!ans)
    {
        cout << "No" << endl;
        system("pause");
        return 0;
    }
    for (int i = 0; i < S.size(); i++)
    {
        for (int j = 0; j < S.size(); j++)
        {
            if (i != j && S[i] == S[j])
            {
                cout << "No" << endl;
                system("pause");
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    system("pause");
    return 0;
}