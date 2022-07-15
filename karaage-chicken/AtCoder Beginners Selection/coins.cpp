#include <iostream>

using namespace std;

int main()
{
    int A, B, C, X;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> X;

    int countA, countB, countC;
    countA = min(X / 500, A);
    countB = min((X - 500 * countA) / 100, B);
    countC = min((X - 500 * countA - 100 * countB) / 50, C);
    if (X - 500 * countA - 100 * countB - 50 * countC > 0)
    {
        cout << 0 << endl;
        system("pause");
        return 0;
    }

    int count = 0;
    for (int i = countA; i >= 0; i--)
    {
        int aX = X - 500 * i;
        for (int t = min(countB + 5 * (countA - i), B); t >= 0; t--)
        {
            int bX = aX - 100 * t;
            if (bX / 50 <= C)
            {
                count++;
            }
            else
            {
                break;
            }
        }
    }
    cout << count << endl;
    system("pause");
    return 0;
}
