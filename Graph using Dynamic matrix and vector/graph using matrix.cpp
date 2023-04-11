
#include<bits/stdc++.h>
using namespace std;
 int main()
 {

     #define n 100
     int nodes;
     int edges;
      int g[n][n];


      cin>>nodes>>edges;

      int u,v;
      for (int i=0; i<edges; i++)
      {
          cin>>u>>v;
          g[u][v]=1;
          g[v][u]=1;
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
