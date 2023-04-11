#include <bits/stdc++.h>
using namespace std;
/*
class cmp{
public:
    bool operator()(int l, int r)
    {
        return l>r ? 1:0;
    }

};*/

//min heap
 int main()
 {
      priority_queue< int,vector<int>, greater<int>> pq;

      pq.push(200); //2000
      pq.push(10); //2000 100
      pq.push(100); //1 2000 100

   // pq.pop();
      cout<<pq.top()<<endl;

 }
