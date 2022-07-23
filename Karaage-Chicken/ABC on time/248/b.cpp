#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long A, B, K;
    cin >> A >> B >> K;
    long long i = 0;
    while (A * pow(K, i) < B)
    {
        ++i;
    }
    cout << i << endl;
    system("pause");
    return 0;
}