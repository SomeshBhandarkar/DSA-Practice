#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int main()
{
    stack<char> s;

    string name = "somesh";

    for(int i=0; i<name.length(); i++){
        char ch = name[i];
        s.push(ch);
    }

    string ans = "";

    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout << "answer is: " << ans << endl;
    return 0;
}