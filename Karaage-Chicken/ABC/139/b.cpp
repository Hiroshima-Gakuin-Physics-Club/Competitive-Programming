#include <bits/stdc++.h>
const int INF = 1 << 29;

using namespace std;
//切り上げのテクニック
int main()
{
    int A, B;
    cin >> A >> B;
    cout << (B - 1 + A - 2) / (A - 1) << endl; //切り上げは分子に分母ー１を足す
    system("pause");
    return 0;
}