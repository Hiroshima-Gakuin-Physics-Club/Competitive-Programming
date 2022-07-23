#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, C, D;
    int input_temp;
    cin >> input_temp;
    A = input_temp / 1000;
    B = input_temp / 100 % 10;
    C = input_temp % 100 / 10;
    D = input_temp % 10;
    int input[] = {A, B, C, D};
    for (int i = 0; i < 8; i++)
    {
        bitset<3> bs(i);
        int sum = A;
        for (int t = 0; t < 3; t++)
        {
            if (bs[t])
            {
                sum += input[t + 1];
            }
            else
            {
                sum -= input[t + 1];
            }
        }
        if (sum == 7)
        {
            char bs0, bs1, bs2;
            bs0 = bs[0] ? '+' : '-';
            bs1 = bs[1] ? '+' : '-';
            bs2 = bs[2] ? '+' : '-';
            cout << A << bs0 << B << bs1 << C << bs2 << D << "=7" << endl;
            system("pause");
            return 0;
        }
    }
}