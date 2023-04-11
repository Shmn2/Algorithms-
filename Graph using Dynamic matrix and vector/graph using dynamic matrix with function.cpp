#include<bits/stdc++.h>
using namespace std;

void init(int **G, int n)
{
    for (int i =0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            G[i][j]=0;
        }
    }
}

void addEdge(int **G, int u, int v)
{
    G[u][v]=1;
    G[v][u]=1;

}


void printGraph(int **G, int n)
{
    for (int i =0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
           cout<<G[i][j]<<" ";
        }
        cout<<endl;
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
      int u,v;
      init(g,nodes);
      for (int i=0; i<edges; i++)
      {
          cin>>u>>v;
          addEdge(g,u,v);

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
printGraph(g,nodes);


      return 0;
 }

