#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;
//コーナーケースに気をつける

int main()
{
    long long H, W;
    cin >> H >> W;
    if (H == 1 || W == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << (W / 2) * H + W % 2 * (H / 2 + H % 2) << endl;
    }
    system("pause");
    return 0;
}