#include<iostream>
#include<vector>
#include<algorithm>
#include<vector>
#include<utility>
#include<string>
using namespace std;

void printVector(vector<int> &v){
    // printing the size of vector 
    cout << "size: " << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        // v.size() -> T.C is O(1)
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // pair<int, string> p;
    // // to make a pair use make_pair()
    // // p = make_pair(12,'somesh');
    // // we can also declare the pair like 
    // p = {12,"somesh"}; // this is a better way to declare
    // // we can also copy pairs like -->
    // pair<int, string> &p1 = p; // we are directly passing the reference to the previous pair(p) there is no copy created
    // p1.first = 3; 
    // cout << p.first <<" " << p.second << endl; // to access the first value in pair

    // // why we need a pair ?
    // // we need it to maintain a relationship between two things like, int and string,
    // // or you want to store the index and the price together which has a relation betn both of them

    // int a[] = {1,2,3};
    // int b[] = {4,5,6};
    // // now to maintain a relationship betn the two, make a pair
    // pair <int, int> p_array[3]; 
    // p_array[0] = {1,2};
    // p_array[1] = {2,3};
    // p_array[2] = {3,4};
    // // so if we swap 0th and 2nd index, the whole pair will be swapped and we don't need to maintain a relation 
    // swap(p_array[0], p_array[2]);   
    // for(int i=0; i<3; i++){
    //     cout << p_array[i].first << " " << p_array[i].second << endl;  
    // } 
    
    // // and to take input what we can do is just like general 

    // pair<int, char> inputp;
    // //take input
    // cin >> inputp.first;
    // cin >> inputp.second;
    // cout << inputp.first << " " << inputp.second << endl;



    // now coming on vectors 
    // vectors are dynamic arrays which increase their size automatically 
    vector<int> v; // this is a normal vector an empty vector
    // but we can also a container in it like,
    // vector<pair<int,int>> vpair;

    // how to take multiple inputs inside vectors
    int n;
    cin >> n; // this is the size

    for(int i=0; i<n; ++i){
        int x; 
        cin >> x; // this is the actual element that we want to push in
        printVector(v);
        v.push_back(x); // O(1) T.C of push_back function 

    }



    // now to declare a vector of specific size we can do is,
    vector<int> v1(5);
    v1.push_back(7);
    v1.push_back(6);
    // v1.pop_back();
    // now to fill a vector with a specific value what we can do is 
    //vector<data_type> vector_name(vector_size, vector_number_you_want_to_fill_with)
    // vector <int> v2(10,3); // complete 10 indexes in vector will be filled with 3's

    // we can also copy one vector to another
    vector<int> &v2 = v1; // T.C is O(n) so keep that in mind, so use ampersand to not to create a copy which is an expensive operation to perform
    printVector(v1);
    v2.push_back(8);
    printVector(v2);
    printVector(v1);
    return 0;
}