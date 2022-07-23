#include <bits/stdc++.h>

using namespace std;
//数字と並んでいる数でdequeを作るみたい　

//ここまで完答　Aは二回WA
//焦らず問題しっかり読むことが大事だと分かった

int main()
{
    long long Q;
    cin >> Q;
    queue<long long> cylinder;
    for (int i = 0; i < Q; i++)
    {
        string s;
        getline(cin, s);
        if (s[0] == '1')
        {
            s.erase(0, 2);
            long long x, c;
            string xsum;
            for (int t = 0; t < s.size(); t++)
            {
                if (s[0] != ' ')
                {
                    xsum += s[t];
                    s.erase(0, 1);
                }
                else
                {
                    x = stoll(xsum);
                    s.erase(0, 1);
                }
            }
            c = stoll(s);
            for (int t = 0; t < c; t++)
            {
                cylinder.push(x);
            }
        }
        else if (s[0] == '2')
        {
            s.erase(0, 2);
            if (s == "")
            {
                continue;
            }

            long long c = stoll(s);

            long long sum = 0;
            for (int t = 0; t < c; t++)
            {
                sum += cylinder.front();
                cylinder.pop();
            }
            cout << sum << endl;
        }
        else
        {
            i--;
        }
    }

    system("pause");
    return 0;
}