#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

void printSet(set<string>& s){
    cout << "size: " << s.size() << endl;
    for(auto it: s){
        cout << it << " ";
    }cout << endl;
}

int main()
{
    // inbuilt operation also is done using red black trees for sets
    set<string> s;
    s.insert("somesh"); // O(log(n)) every operation
    s.insert("ninad");
    s.insert("prasad");

    // auto it = s.find("ninu");
    // if(it!=s.end())
    //     cout << (*it);
    // else    
    //     cout << "no value" << endl;

    // we can also erase some element from the set
    // erase can take an iterator as well as the value itself
    // using iterator --> 
    // auto it = s.find("prasad");
    // if(it!=s.end())
    //     s.erase(it);
    // else
    //     cout << "nothing to delete" << endl;

    // directly passing the value -->
    s.erase("prasad");
    printSet(s);

    return 0;
}