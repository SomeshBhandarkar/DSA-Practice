#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    multiset<string> s;
    s.insert("somesh");
    s.insert("ninad");
    s.insert("prasad");
    s.insert("somesh");

    multiset<string> :: iterator it;
    for(auto &it : s){
        cout << it << " "; 
    }cout << endl;
    return 0;
}