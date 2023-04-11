#include<bits/stdc++.h>
using namespace std;

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
/*
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
      return 0;
 }

