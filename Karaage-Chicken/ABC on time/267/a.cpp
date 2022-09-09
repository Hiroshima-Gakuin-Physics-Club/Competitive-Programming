#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;
// switchは文字列だめ
int main()
{
    string S;
    cin >> S;
    int ans = 0;
    if (S == "Monday")
    {
        ans = 5;
    }
    else if (S == "Tuesday")
    {
        ans = 4;
    }
    else if (S == "Wednesday")
    {
        ans = 3;
    }
    else if (S == "Thursday")
    {
        ans = 2;
    }
    else
    {
        ans = 1;
    }

    cout << ans << endl;
    system("pause");
    return 0;
}