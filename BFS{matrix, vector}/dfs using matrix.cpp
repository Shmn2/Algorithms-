#include<bits/stdc++.h>
using namespace std;
 void dfs(int **g, int n, int source)
 {
     stack<int> S;
     bool * visited = new bool[n];
     for (int i=0;i<n;i++)
     {
         visited[i] = false;

     }
     visited[source]=true;
     S.push(source);


     while (!S.empty()){
        int v = S.top();
        S.pop();
        cout<<v<<" ";
        for(int i=0; i<n;i++)
        {if (g[v][i]==1)
        {
            int next =1;
            if (visited[next]==false)
            {
                S.push(next);
                visited[next]=true;
            }
        }

        }
     }
     cout<<endl;

     for(int i=0; i<n;i++)
     {
         cout<<i<<" "<<visited[i]<<endl;
     }

 }


 int main()
 {
  int nodes;
     int edges;
      int **g;


      cin>>nodes>>edges;

      g = new int*[nodes];

      for (int i=0; i<nodes;i++)
        {
            g[i]= new int[nodes];
        }

        for (int i =0 ; i<nodes; i++)
      {
          for (int j = 0; j<nodes; j++)
          {
              g[i][j]= 0;
          }

      }
      int u,v,w;
      for (int i=0; i<edges; i++)
      {
          cin>>u>>v>>w;
          g[u][v]=w;
          g[v][u]=w;
      }
/*inputs of weighted graph
5 7
0 1 3
0 3 7
0 4 8
4 3 3
1 3 4
1 2 1
2 3 2
    */


      for (int i =0 ; i<nodes; i++)
      {
          for (int j = 0; j<nodes; j++)
          {
              cout<<g[i][j]<<" ";
          }
          cout<<endl;
      }
dfs(g,nodes,0);
     return 0;
 }

 /* inputs of unweighted graph
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
