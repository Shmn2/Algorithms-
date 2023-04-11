
#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int> *g, int n, int s)
{
    int *visited = new int[n];
    int *distance = new int [n];

    for(int i =0; i<n; i++)
    {
        visited[i] = distance[i]= 0;
    }

    queue<int> q;

    q.push(s);
    visited[s] = 1;
    distance[s] = 0;


    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for(int i=0; i<g[p].size();i++)
        {
            int nxtadj = g[p][i];
            if(visited[nxtadj]==0);
            {
                visited[nxtadj]=1;
                q.push(nxtadj);
                distance[nxtadj]= distance[p] + 1 ;
            }
        }
    }


cout<<"distance from "<< s<<endl;


for(int i =0; i<n; i++)
{
    cout<<s<<" to "<<i<< " : "<<distance[i]<<endl;
}



}


 int main()
 {
     vector<int> *g;
     int nodes;
     int edges;
     cin>>nodes>>edges;
     g= new vector<int>[nodes];
     int u,v;

     for(int i=0; i<edges;i++)
     {
         cin>>u>>v;
         g[u].push_back(v);
         g[v].push_back(u);

     }

     for(int i=0; i<nodes;i++)
     {
         cout<<i<<"-->";
         for(int j=0; j<g[i].size();j++)
         {
             cout<<g[i][j]<<" ";
         }
         cout<<endl;
     }
bfs(g,nodes, 0);
     return 0;
 }

 /*
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
