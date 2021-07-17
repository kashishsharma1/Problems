#include<iostream>
using namespace std;

//implementing a templated circular queue class

template<typename T>
class Queue{
    T *arr;
    int front;
    int rear;
    int ms;
    int cs;

public:
    Queue(int ds = 4){
        front = 0;
        ms = ds;
        rear = ms - 1;
        arr = new T[ms];
        cs = 0;
    }
    bool isFull(){
        return cs == ms;
    }

    bool isEmpty(){
        return cs == 0;
    }

    void push(T data){
        if(!isFull()){
            rear = (rear + 1) % ms;
            arr[rear] = data;
            cs++;
        }
    }

    void pop(){
        if(!isEmpty()){
            front = (front + 1) % ms;
            cs--;
        }
    }

    T getFront(){
        return arr[front];
    }

};

int main(){
    Queue<int> q;

    for(int i = 1; i <= 6;i++){
        q.push(i);
    }
    q.pop();
    q.push(8);

    while(!q.isEmpty()){
        cout<<q.getFront()<<endl;
        q.pop();
    }

    return 0;
}