// this is a leet code question --> 852. Peak Index in a Mountain Array

#include<iostream>
#include<vector>
using namespace std;

int findPeakElement(int arr[], int n){
    int s = 0;
    int e = n - 1;
    
    int mid = s + (e-s)/2;

    while(s < e){ // lopp only till s < e and not s <= e b'coz it'll do extra comparison which is already performed

        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    return s; // you can also return mid, it is giving the same answer
}

int main()
{
    int arr[10];
    int n;
    cout << "enter the size of array: " << endl;
    cin >> n;
    cout << "enter array elements: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }cout << endl;
    int index = findPeakElement(arr,n);
    cout << index << endl;

    return 0;
}