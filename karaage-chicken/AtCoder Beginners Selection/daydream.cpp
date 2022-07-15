#include <iostream>
#include <string>

using namespace std;

//解法自体は間違っていないが、文字列を渡しているのでメモリを食う。数値にするとよい。
//参考：https://qiita.com/259_Momone/items/991d31ccc1f830a1d578#%E7%AC%AC-9-%E5%95%8F--abc049c---%E7%99%BD%E6%98%BC%E5%A4%A2--daydream
bool T(string S)
{
    if (S == "")
    {
        return true;
    }
    string pop5 = S.substr(0, 5);
    if (pop5 == "dream")
    {
        if (S.substr(5, 2) == "er")
        {
            return T(S.substr(5)) || T(S.substr(7));
        }
        return T(S.substr(5));
    }
    else if (pop5 == "erase")
    {
        if (S.substr(5, 1) == "r")
        {
            return T(S.substr(6));
        }
        return T(S.substr(5));
    }
    else
    {
        return false;
    }
}

int main()
{
    string S;
    cin >> S;
    if (T(S))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    system("pause");
    return 0;
}