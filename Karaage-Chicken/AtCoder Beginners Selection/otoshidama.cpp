#include <iostream>

using namespace std;

int main()
{
    int N, Y;
    cin >> N >> Y;
    for (int i = 0; i <= N; i++)
    {
        for (int t = 0; t <= N - i; t++)
        {
            if (10000 * i + 5000 * t + 1000 * (N - i - t) == Y)
            {
                cout << i << " " << t << " " << N - i - t << endl;
                system("pause");
                return 0;
            }
        }
    }

    cout << "-1 -1 -1" << endl;
    system("pause");
    return 0;
}