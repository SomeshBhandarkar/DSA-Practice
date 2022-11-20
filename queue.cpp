#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;

    //pushing into queue
    q.push(12);
    cout << "front of queue is: " << q.front() << endl;
    q.push(21);
    cout << "front of queue is: " << q.front() << endl;
    q.push(33);
    q.push(55);

    cout << "size of the queue is: " << q.size() << endl;

    // pop from queue
    q.pop();
    q.pop();
    
    cout << "size of the queue is: " << q.size() << endl;

    cout << "front of queue is: " << q.front() << endl;

    if(q.empty())
        cout << "queue empty!" << endl;
    else
        cout << "queue is not empty!" << endl;

    return 0;
}