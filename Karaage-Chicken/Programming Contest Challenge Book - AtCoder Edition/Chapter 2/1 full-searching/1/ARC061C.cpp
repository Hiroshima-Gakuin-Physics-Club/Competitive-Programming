#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    cin >> S;
    long long sum = 0;
    int len = S.size();
    for (long long i = 0; i < (1 << (len - 1)); i++)
    {
        bitset<10> bs(i);
        int last = -1;
        for (int t = 0; t < len - 1; t++)
        {
            if (bs[t] == 1)
            {
                sum += stoll(S.substr(last + 1, t - last));
                last = t;
            }
        }
        sum += stoll(S.substr(last + 1));
    }

    cout << sum << endl;
    system("pause");
    return 0;
}