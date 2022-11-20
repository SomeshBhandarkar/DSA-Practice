#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

void print(map<int,string> &m){
    cout << "map size: " << m.size() << endl;
    for(auto &pr: m){
        cout << "first val: " << pr.first << " second val: " << pr.second << endl;
    }
}

int main()
{
    map<int, string> m;
    m[1] = "abc"; // this takes o(log(n)) time complexity 
    m[3] = "sss";
    m[5] = "cdc";
    m.insert({4,"soms"});

    // printing maps --> 
    // first creating an iterator to store it !
    // map<int,string> :: iterator it;

    // then using loop to iterate the map with the help of an iterator -->
    // for(it = m.begin(); it != m.end(); it++){
    //     cout << it->first << " " << it->second << endl;
    // }
    // instead of using/defining the whole iterator we can use 'auto' keyword as an iterator
    // printing map -->
    // for(auto it: m){
    //     cout << it.first << " " << it.second << endl;
    // }

    // functions based on maps -->

    auto it = m.find(3); // this will give end() value if the given key is not in the map
    // m.erase(it); // either you can pass the iterator or,
    m.erase(4);
    // if(it == m.end()){
    //     cout << "no value" << endl;
    // }
    // else{
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    print(m);

    return 0;
}