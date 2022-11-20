#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// reverse after specific 
// vector<int> reverseArr(vector<int> v, int m){
//     int s=m+1, e = v.size()-1;
//     while(s<=e){
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }

vector<int> reverseArray(vector<int> v){
    int s = 0, e = v.size()-1 ;
    while (s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void printArray(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    cout << "before reverse: " << endl;
    for(int i=0; i<v.size();i++){
        cout << v[i] << " ";
    }cout << endl;
    vector<int> ans = reverseArray(v);
    cout << "after reverse: " << endl;
    printArray(ans);
    return 0;
}