#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;

    // push operation 
    s.push(2);
    s.push(3);

    // pop operation 
    s.pop();


    cout << "printing top element: " << s.top() << endl;
    
    // is stack empty?
    if(s.empty()){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }

    cout << "stack size: " << s.size() << endl;

    return 0;
}