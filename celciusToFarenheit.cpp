#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout << "enter n: " << endl;
    cin >> n;
    int c = 0;

    while(c <= n){
        int f = (9/5 * c) + 32;
        cout << "celcius: " << c << "farenheit: " << f << endl;
        c++;

    }
    return 0;
}