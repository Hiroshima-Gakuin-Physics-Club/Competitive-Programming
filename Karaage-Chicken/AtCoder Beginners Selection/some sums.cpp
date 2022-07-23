#include <iostream>

using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        int places = 0;
        int copyI = i;
        while (true)
        {
            places += copyI % 10;
            if (copyI / 10 <= 0)
            {
                break;
            }
            copyI /= 10;
        }
        if (places >= A && places <= B)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    system("pause");
    return 0;
}