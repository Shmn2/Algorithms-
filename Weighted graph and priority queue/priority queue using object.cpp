#include <bits/stdc++.h>
using namespace std;

struct Student {
int id;
string name;
float cgpa;

};
//min heap

class cmp{
public:
    bool operator()(Student &l, Student &r)
    {
        return l.cgpa>r.cgpa ? 1:0;
    }

};


 int main()
 {
      priority_queue< Student,vector<Student>, cmp> pq;
Student s1= {100, "RICHARD",3.5};
Student s2= {200, "Arron",3.7};
Student s3= {300, "Florence",3.8};



      pq.push(s1);
      pq.push(s2);
      pq.push(s3);

   Student s = pq.top();
   cout<<s.id<<" "<<s.name<<" "<<s.cgpa<<endl;


 }
