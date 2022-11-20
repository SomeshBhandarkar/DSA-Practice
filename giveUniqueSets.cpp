#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;



int main()
{
    set<string> s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        s.insert(str);
    }

    // set is already sorted so no problem 
    for(auto it : s){
        cout << it << endl;
    }
    return 0;
}