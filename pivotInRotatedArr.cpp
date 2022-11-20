// this problem is solved using binary search ! 

#include<iostream>
using namespace std;


int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s; // here you can also return e, it'll work fine as well
}

int main()
{
    int arr[5] = {8,10,17,3,1};
    cout << "Pivot is: " << getPivot(arr, 5);
    return 0;
}