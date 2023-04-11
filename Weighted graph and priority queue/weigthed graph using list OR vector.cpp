#include<bits/stdc++.h>
using namespace std;

struct node{
int value;
 int weight;


};
int main()
{
    vector<node> *g;

    int n; //vertex
    int m; // edges
    cin>>n>>m;

    g = new vector<node> [n];

    int u,v,w;

    for(int i=0; i<m;i++)
    {
        cin>>u>>v>>w;
        node s1 = {v,w};
        g[u].push_back(s1);
        node s2 = {u,w};
        g[v].push_back(s2);
    }

for(int i = 0;i<n;i++)
{
    cout<<i<<"-->";
    for(int j=0; j<g[i].size();j++)
    {   node o = g[i][j];
        cout<<"("<<o.value<< " "<<o.weight<<")";
    }
    cout<<endl;
}
    return 0;
}
/* user input
5 7
0 1 3
0 3 7
0 4 8
4 3 3
1 3 4
1 2 1
2 3 2
*/
