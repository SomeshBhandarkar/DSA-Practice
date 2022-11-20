#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    vector<int> v = {1,2,3,4,5};
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    // declaring an iterator
    // to declare :: iterator iterator_name = vector_name.begin()/end()/etc.
    // vector<int> :: iterator it = v.begin();
    // // it is like pointers to display the value at the exact memory address
    // cout << *it+1 << endl; 
    // // printing a vector using iterator 
    // for(it = v.begin(); it!=v.end(); it++){
    //     cout << (*it) << endl;
    // }
    // this is a pair container inside vector
    vector<pair<int,int> > v1 = {{1,2},{2,1},{3,2}};
    // to declare an iterator you have to deeclare it with its type of datatype
    vector<pair<int,int> > :: iterator it;

    // printing pair -->
    // cout << "using pointer: " << endl;
    // for(it=v1.begin(); it!=v1.end(); ++it){
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    // // you can also use -> arrow operator 
    // cout << "using arrow operator : " << endl;
    // for(it = v1.begin(); it!=v1.end(); ++it){
    //     cout << (it->first) << " " << (it->second) << endl;
    // }

    // using for each loop on pairs/ containers to make the code look shorter 
    // use ampersand so that we'll not create copy and instead we'll use the original elements itself
    for(auto &value : v){
        cout << value << " " << endl;
    }

    for(auto &value: v1){
        cout << value.first << " " << value.second << endl;
    }
    return 0;
}