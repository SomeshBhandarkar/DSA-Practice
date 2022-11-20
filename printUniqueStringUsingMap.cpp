#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string, int> m;
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    cout << "stirng" << "  " << "value" << endl;
    for(auto it: m){
        cout << it.first << "        " << it.second << endl;
    }
    return 0;
}