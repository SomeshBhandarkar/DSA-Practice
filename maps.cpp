#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<string>
using namespace std;

// creating a function to display maps 
void printMap(unordered_map<int, string> &m){
    // another way of printing maps
    // using auto keyword
    cout << "size: " << m.size() << endl;
    for(auto &it: m){
        cout << it.first << " " << it.second << endl;
    }
}

int main()
{   
    // maps store a pair in which it has a key and a value
    // maps use red-black-trees in the background 
    // declaring a map 
    // map<int, string> m;

    // inserting a value into a map
    // m[1] is key and = "somesh" is the value 
    // bcuz map consits of an integer type key and string type value
    // m[1] = "somesh";
    // m[2] = "ninad";
    // m[3] = "prasad"; 

    // // one more way of inserting into maps is: 
    // // in this insert function you have to pass an pair 
    // // we insert into pair by make_pair() or using {} curly brackets
    // m.insert({4,"aarya"});

    // declaring the iterator
    // one way to print map
    // map<int, string> ::iterator it;

    // for(it = m.begin(); it != m.end(); ++it){
    //     cout << (it->first) << " " << (it->second) << endl;
    // }

    // using find() method to find a particular value of a key 
    // where find returns a iterator of the provided value 
    // and if it does not return any value which is not present 
    // it'll return m.end()
    // auto it = m.find(4); // will return 1 somesh as output
    // if(it == m.end())
    //     cout << "no value"<<endl;
    // else
    //     cout << (it->first) << " " << (it->second) << endl;

    // second type of method is->
    // m.erase(); // erase will remove the key and value from the map
    //it either takes and iterator or the key value itself
    // m.erase(4); // by giving key 
    // m.erase(it);

    // // this will clear everything in the map
    // m.clear();

    // printMap(m);

    // unordered maps --> 
    // differences between maps and unordered maps
    // 1. inbuilt implementation 
    // 2. time complexity 
    // 3. valid keys 

    // inbuilt unordered_maps uses hash tables  
    // one thing to be noticed that unordered maps can only work on int, long, stirng and etc 
    // and not on complex data structures like vectors, pair, sets and etc.
    unordered_map<int,string> um;
    um[1] = "somesh";
    um[2] = "ninad";
    um[3] = "prasad";
    um[4] = "omkar";

    // declaring iterator for printing the unordered map
    // unordered_map<int, string> ::iterator it;
    // for(it = um.begin(); it!=um.end(); ++it){
    //     cout << (it->first) << " " << (it->second) << endl;
    // }

    // using range based loops or for-each loop
    // for(auto it: um){
    //     cout << it.first << " " << it.second << endl;
    // }

    auto it = um.find(1);
    if(it !=um.end()){
        cout << "no value";
    }
    else{
        cout << (it->first) << " " << (it->second) << endl;
    }
    // for(auto it : um){
    //     cout << it.first << " " << it.second << endl;
    // }
    // printMap(um);

    return 0;
}