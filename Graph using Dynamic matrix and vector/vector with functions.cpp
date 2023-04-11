#include<bits/stdc++.h>
using namespace std;

void
int main()
{
    vector<int> *g;

    int nodes;
    int edges;
    cin>>nodes>>edges;

    g = new vector<int>[nodes];
    int u,v;

    for(int i=0; i<edges;i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

for(int i = 0;i<nodes;i++)
{
    cout<<i<<"-->";
    for(int j=0; j<g[i].size();j++)
    {
        cout<<g[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}
/* user input
7 11
0 1
0 3
1 3
2 3
4 3
1 2
4 2
4 6
1 6
2 5
1 5

*/
