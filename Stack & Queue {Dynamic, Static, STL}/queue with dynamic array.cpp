#include <bits/stdc++.h>
using namespace std;
int *a;
int frontIndex, rearIndex, n;

int isEmpty() {
    return frontIndex > rearIndex ? 1 : 0;
}

int isFull() {
    return rearIndex == n - 1 ? 1 : 0;
}

void enqueue(int value) {
    if (!isFull()) {
        a[++rearIndex] = value;
    } else {
        cout << "Queue is full" << endl;
    }
}

void dequeue() {
    if (!isEmpty()) {
        ++frontIndex;
    } else {
        cout << "Queue is empty" << endl;
    }
}
int frontElement() {
    return a[frontIndex];
}
void display() {
    for (int i = frontIndex; i <= rearIndex; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main() {
    n = 5;
    a = new int[n];
    frontIndex = 0;
    rearIndex = -1;
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();
    dequeue();
    display();
    return 0;
}
