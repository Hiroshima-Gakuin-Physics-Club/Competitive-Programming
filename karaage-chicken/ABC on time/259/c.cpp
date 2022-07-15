#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;
    string dS, dT;
    char s = S[0];
    int c = 0;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == s)
        {
            c++;
        }
        else
        {
            dS += s + to_string(c);
            s = S[i];
            c = 1;
        }
    }
    dS += s + to_string(c);
    s = T[0];
    c = 0;
    for (int i = 0; i < T.length(); i++)
    {
        if (T[i] == s)
        {
            c++;
        }
        else
        {
            dT += s + to_string(c);
            s = T[i];
            c = 1;
        }
    }
    dT += s + to_string(c);
    string ans = "No";
    int cs = 0;
    int ct = 0;
    while (dS.length() > cs || dT.length() > ct)
    {
        if (dS[cs] != dT[ct])
        {
            break;
        }
        cs++;
        ct++;
        string ns, nt;
        while (isdigit(dS[cs]))
        {
            ns += dS[cs];
            if (cs == dS.length() - 1)
            {
                break;
            }
            else
            {
                cs++;
            }
        }
        while (isdigit(dT[ct]))
        {
            nt += dT[ct];
            if (ct == dT.length() - 1)
            {
                break;
            }
            else
            {
                ct++;
            }
        }
        int sns = stoi(ns);
        int snt = stoi(nt);
        if (sns > snt || sns == 1 && sns < snt)
        {
            break;
        }
        else if (ct == dT.length() - 1)
        {
            ans = "Yes";
            ct++;
            cs++;
        }
    }
    if (cs == dS.length() - 1 && ct == dT.length() - 1)
    {
        ans = "Yes";
    }
    cout << ans << endl;
    system("pause");
    return 0;
}