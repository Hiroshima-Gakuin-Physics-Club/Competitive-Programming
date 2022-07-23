#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> numbers{N};

    array<char, 5> char_arr{};
    for (auto &number : numbers)
    {
        sprintf(char_arr.data(), "%c", number);
        printf("%s", char_arr.data());
    }
    cout << endl;
    system("pause");
    return 0;
}