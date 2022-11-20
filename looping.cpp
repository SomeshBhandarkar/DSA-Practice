#include<iostream>
using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0;
//     for (int i = 1; i <= n; i++){
//         sum = sum + i;
//     }
//     cout << sum << endl;
//     return 0;
// }
// fibonacci series -->
// int main(){
//     int n;
//     cin >> n;
//     int a = 0, b = 1;
//     cout << a  << " " << b << " ";
//     for (int i=0;i<n;i++){
//         int nextnumber = a + b;
//         a = b;
//         b = nextnumber;
//         cout << nextnumber << " ";
//     }
//     return 0;
// }

// prime no
int main(){
    int n;
    cin >> n;
    bool isPrime = 1;
    for(int i = 2; i < n; i++){
        if(n%i==0){
            // cout << " not a prime no.";
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 0){
        cout << "It is not a Prime no." << endl;
    }
    else{
        cout << "it is a prime no." << endl;
    }
    return 0;
}
