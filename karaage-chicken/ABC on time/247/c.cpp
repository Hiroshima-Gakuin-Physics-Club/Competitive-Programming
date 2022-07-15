#include <bits/stdc++.h>

using namespace std;

string S(int n)
{
    if (n == 1)
    {
        return "1";
    }

    return S(n - 1) + " " + to_string(n) + " " + S(n - 1);
}

int main()
{
    int N;
    cin >> N;
    cout << S(N) << endl;
    system("pause");
    return 0;
}