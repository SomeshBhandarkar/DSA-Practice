#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    char s,a;
    cin >> s >> a;

    if(abs(s-a)==32){
        cout << "kaam kar raha hai" << endl;
    }
    else{
        cout << "bsdk" << endl;
    }
    return 0;
}