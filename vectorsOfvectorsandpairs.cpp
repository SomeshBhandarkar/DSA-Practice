#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;
void printVector(vector<int> &v){
    cout << "size: " << v.size() << endl;
    for(int i=0;i<v.size();i++){
        //v[i] is a pair so we need to specify if we want first, second or both of the elements that are stored in a pair 
        cout << v[i] << endl;
    }
    cout << endl;
}
int main()
{   

    // making a vector of pair  --> 

    // each element of vector will be a pair 
    // // ex. v[0] will be a pair like {1,2}
    // vector<pair<int, int> > v;
    // printVector(v);
    // // how to take user input for vector<pair> ?
    // int n;
    // cin >> n;
    // for(int i=0; i<n; i++){
    //     int x, y;
    //     cin >> x >> y;
    //     v.push_back({x,y});
    // }
    // printVector(v);
    // swap(v[0],v[1]);
    // printVector(v);


    // array of vectors -->
    // array of vectors is kind of 2d vector/array but where rows are fixed and columns are infinite bcoz it is the length of the dynamic vector
    // this has created 10 vectors 
    // int N;
    // cin >> N; // number of vectors to be made
    // vector<int> v[N]; // created a array of vector

    // for(int i=0; i<N; ++i){
    //     int n;
    //     cin >> n; // size of the vector that you want to insert in
    //     for(int j=0; j<n; ++j){
    //         int x;
    //         cin >> x; // elements that you want to insert in nth vector 
    //         v[i].push_back(x);
    //     }
    // } 

    // // printing each vector, because we need to print each and every vector and its elements 
    // for(int i=0; i<N; ++i){
    //     printVector(v[i]);
    // }


    // vector of vector 
    vector<vector<int> > v;
    int N;
    cout << "how many vectors: " << endl;
    cin >> N;
    for(int i=0; i<N; i++){
        int n;
        cin >>n;
        vector<int> temp;
        for(int j=0; j<n; ++j){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    // printing the vector 
    for(int i=0; i<v.size(); i++){
        printVector(v[i]);
    }

    return 0;
}