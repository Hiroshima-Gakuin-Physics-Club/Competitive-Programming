#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> d(3);
    d[0] = a;
    d[1] = b;
    d[2] = c;
    sort(d.begin(), d.end());
    if (d[1] == b)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    system("pause");
    return 0;
}