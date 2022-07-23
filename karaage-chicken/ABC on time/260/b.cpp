#include <bits/stdc++.h>
const int INF = 1 << 29;

//オーダー的に工夫しなくてもいけた
//このあたりの問題はもっとシンプルに考える必要がある
//今回詰まったところはvectorの中の複数のバラバラな要素を指定して消すこと
//一個ずつ消してしまうとindexが変わってしまって正しく消せない。
using namespace std;

int main()
{
    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;
    vector<pair<int, int>> A(N);
    vector<pair<int, int>> B(N);
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        A[i] = make_pair(-a, i);
    }
    for (int i = 0; i < N; i++)
    {
        int b;
        cin >> b;
        B[i] = make_pair(-b, i);
    }
    sort(A.begin(), A.end());

    vector<int> ans;
    for (int i = 0; i < X; i++)
    {
        ans.push_back(A[i].second);
    }

    sort(B.begin(), B.end());
    for (int i = 0; i < A.size(); i++)
    {
        swap(A[i].first, A[i].second);
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < Y; i++)
    {

        ans.push_back(B[i].second);
        for (int j = 0; j < A.size(); j++)
        {
            if (A[j].first == B[i].second)
            {
                wa.push_back(j);
                break;
            }
        }
        wb.push_back(i);
    }
    sort(wa.begin(), wb.begin());
    for (int i = 0; i < Y; i++)
    {
        A.erase(A.begin() + wa[i] - i);
        B.erase(B.begin() + wb[i] - i);
    }
    wa.clear();
    wb.clear();

    for (int i = 0; i < B.size(); i++)
    {
        swap(B[i].first, B[i].second);
    }
    sort(B.begin(), B.end());
    sort(A.begin(), A.end());
    vector<pair<int, int>> T(A.size());
    for (int i = 0; i < A.size(); i++)
    {
        T[i] = make_pair(A[i].second + B[i].second, A[i].first);
    }
    sort(T.begin(), T.end());
    for (int i = 0; i < Z; i++)
    {
        ans.push_back(T[i].second);
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] + 1 << endl;
    }
    system("pause");
    return 0;
}