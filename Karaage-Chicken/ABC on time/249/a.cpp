#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, C, D, E, F, X;
    cin >> A >> B >> C >> D >> E >> F >> X;
    int T = 0;
    int Ao = 0;
    int t = X / (A + C);
    int a = X / (D + F);
    T += t * A * B;
    Ao += a * D * E;
    t = min(X % (A + C), A);
    a = min(X % (D + F), D);
    T += t * B;
    Ao += a * E;
    if (T > Ao)
    {
        cout << "Takahashi" << endl;
    }
    else if (T < Ao)
    {
        cout << "Aoki" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
    system("pause");
    return 0;
}