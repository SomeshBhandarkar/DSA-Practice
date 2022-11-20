#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;



int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    for(int i =0; i<n; i++){
        string s;
        cin >> s;
        // so to calculate the freq we need to add how many times the string has occcured,
        // m[s] = m[s] + 1; we can do this but a smaller way is,
        m[s]++;
    }
    //printing map
    for(auto it:m){
        cout << "string: " << it.first << " freq: " << it.second << endl;
    }
    return 0;
}