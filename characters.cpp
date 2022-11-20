#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    char name[20];
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "your name is: " << name << endl;
    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    cout << count << endl;
    return 0;
}