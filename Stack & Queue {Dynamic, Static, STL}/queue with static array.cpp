#include<bits/stdc++.h>
using namespace std;
#define n 5
// queue using static array

int a[n];
int Front=0, rear=-1, Size=0;

int isEmpty(){
    return Size==0?1:0;
}

int isFull(){
    return Size==n?1:0;
}

void enqueue(int value){
    if(!isFull()){
        rear=(rear+1)%n;
        a[rear]=value;
        Size++;
    }
    else cout<<"Full"<<endl;
}

void dequeue(){
    if(!isEmpty()){
        Front=(Front+1)%n;
        Size--;
    }
    else cout<<"Empty"<<endl;
}

int frontElement(){
    if(!isEmpty()) return a[Front];
    else return -1;
}

void display(){
    if(!isEmpty()){
        int i=Front;
        while(i!=rear){
            cout<<a[i]<<" ";
            i=(i+1)%n;
        }
        cout<<a[rear]<<endl;
    }
    else cout<<"Empty"<<endl;
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60); // should print "Full"
    display();
    dequeue();
    dequeue();
    display();
    enqueue(70);
    enqueue(80);
    enqueue(90);
    display();
    return 0;
}

