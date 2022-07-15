#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    cin >> S;
    string res = "";
    res += "0";
    for (int i = 0; i < 3; i++)
    {
        if (S[i] == '1')
        {
            res += "1";
        }
        else
        {
            res += "0";
        }
    }
    cout << res << endl;
    system("pause");
    return 0;
}