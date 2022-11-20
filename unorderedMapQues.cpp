#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> um;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        um[s]++;
    }
    //printing
    for(auto it:um){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}