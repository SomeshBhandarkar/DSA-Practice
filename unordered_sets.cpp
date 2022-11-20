#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

void printSet(unordered_set<string>& s){
    cout << "size: " << s.size() << endl;
    for(auto it: s){
        cout << it << " ";
    }cout << endl;
}

int main()
{
    // in unordered set 
    // use unordered_set when you know that order doesn't matter
    // only you need to check the 
    unordered_set<string> us;
    us.insert("somesh");
    us.insert("ninad");
    us.insert("prasad");
    us.insert("om");
    us.insert("manish");
    us.insert("roadster");

    printSet(us);
    return 0;
}