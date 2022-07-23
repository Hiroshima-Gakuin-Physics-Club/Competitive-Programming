#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> d;
    for (int i = 0; i < N; i++)
    {
        d.push_back(0);
        cin >> d[i];
    }
    sort(d.begin(), d.end(), greater<int>());
    int count = 1;
    for (int i = 1; i < N; i++)
    {
        if (d[i - 1] > d[i])
        {
            count++;
        }
    }
    cout << count << endl;
    system("pause");
    return 0;
}