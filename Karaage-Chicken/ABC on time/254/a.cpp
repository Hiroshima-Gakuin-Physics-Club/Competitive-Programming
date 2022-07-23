#include <iostream>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int N;
    cin >> N;
    N %= 100;
    if (N < 10)
    {
        cout << 0 << N << endl;
    }
    else
    {
        cout << N << endl;
    }

    system("pause");
    return 0;
}