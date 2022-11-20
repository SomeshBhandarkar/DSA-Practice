#include<iostream>
using namespace std;

int squareOfInteger(int n){
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while(s <= e){
        long long int square = mid * mid;
        if(square == n){
            return mid;
        }
        else if(square >= mid){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int sqrt(int x){
    return squareOfInteger(x);
}

double morePrecision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i = 0; i<precision; i++){
        factor = factor/10; // this factor is divided by 10 to get 0.1 at first and then 0.01 at second till the precision count 
        for(int j=ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the number: " << endl;
    cin >> n;

    // only till this you'll get the non decimal part of the answer
    int tempSol = squareOfInteger(n);
    cout << "Answer is: " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}