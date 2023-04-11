#include<bits/stdc++.h>
using namespace std;

class Graph {
private :
    int nodes;
    int edges;
    int **g;
public:
    Graph(){}
    Graph(int nodes, int edges)
    {
        this->nodes=nodes;
        this->edges=edges;
         g = new int*[nodes];

      for (int i=0; i<nodes;i++)
        {
            g[i]= new int[nodes];
        }

    }

    void init()
{
    for (int i =0; i<nodes;i++)
    {
        for(int j=0; j<nodes; j++)
        {
            g[i][j]=0;
        }
    }
}

void addEdge(int u, int v)
{
    g[u][v]=1;
    g[v][u]=1;

}


void printGraph()
{
    for (int i =0; i<nodes;i++)
    {
        for(int j=0; j<nodes; j++)
        {
           cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }

}

};


 int main()
 {


     int nodes;
     int edges;



      cin>>nodes>>edges;



     Graph g(nodes, edges);


      int u,v;
      g.init();
      for (int i=0; i<edges; i++)
      {
          cin>>u>>v;
          g.addEdge(u,v);

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
g.printGraph();


      return 0;
 }

