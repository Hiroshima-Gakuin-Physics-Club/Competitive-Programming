#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> a;
    for (int i = 0; i < N; i++)
    {
        a.push_back(0);
        cin >> a[i];
    }
    int Alice = 0, Bob = 0;
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            Alice += a[i];
        }
        else
        {
            Bob += a[i];
        }
    }
    cout << Alice - Bob << endl;
    system("pause");
    return 0;
}