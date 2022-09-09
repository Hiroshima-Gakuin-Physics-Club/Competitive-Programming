#include <bits/stdc++.h>
using namespace std;
const int INF = 1 << 29;

struct Edge
{
    int to;
    int weight;
    Edge(int t, int w) : to(t), weight(w) {}
};
using Graph = vector<vector<Edge>>;

int main()
{
    int N;
    cin >> N;
    Graph G(N + 1);
    for (int i = 1; i <= N - 1; i++)
    {
        int a, b, length;
        cin >> a >> b >> length;
        G[a].push_back(Edge(b, length));
        G[b].push_back(Edge(a, length));
    }
    vector<int> color(N + 1, -1);
    stack<pair<vector<Edge>, unsigned int>> st;
    st.push(make_pair(G[1], 0));
    color[1] = 0;
    while (st.empty() == false)
    {
        vector<Edge> vertex = st.top().first;
        unsigned int c = st.top().second;
        st.pop();

        for (auto e : vertex)
        {
            if (color[e.to] != -1)
            {
                continue;
            }

            if (e.weight % 2 == 0)
            {
                color[e.to] = c;
            }
            else
            {
                c ^= 1;
                color[e.to] = c;
                c ^= 1;
            }

            st.push(make_pair(G[e.to], color[e.to]));
        }
    }

    for (int i = 1; i <= N; i++)
    {
        cout << color[i] << endl;
    }
    system("pause");
    return 0;
}
