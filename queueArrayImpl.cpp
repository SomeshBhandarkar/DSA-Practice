#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Queue{
private:
    int* arr;
    int front;
    int rear;
    int size;

public:
    Queue(){
        size = 100001;
        front = 0;
        rear = 0;
        arr = new int[size];
    }

    // enqueue function 
    void enqueue(int data){
        if(rear == size)
            cout << "no space in queue" << endl;
        else{
            arr[rear] = data;
            rear++;
        }
    }
    // dequeue function to pop
    void dequeue(){
        if(front == rear)
            cout << "queue is empty" << endl;
        else{
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if(front == rear){
                front=0;
                rear=0;
            }
            cout << ans << endl;
        }
    }

    // empty function to check
    bool isEmpty(){
        if(front == rear)
            return true;
        else
            return false;
    }

    // top function to check
    int getFront(){
        cout << "front is:" << arr[front] << endl;
    }
};
int main()
{
    Queue q;

    // enqueue
    q.enqueue(12);
    q.enqueue(14);
    q.enqueue(55);
    q.enqueue(1);

    cout << "front is: " << q.getFront() << endl;
    // dequeue

    q.dequeue();
    q.dequeue();

    cout << "next front is: " << q.getFront() << endl;


    return 0;
}