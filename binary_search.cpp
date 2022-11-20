#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){

    int start = 0;
    int end = n-1;

    // int mid = (start+end)/2; this formulae can fail one test case if start and end are both 2^31 -1 then their addition is out of integers range so,
    int mid = start + (end-start)/2;

    while(start<=end){
        
        if(arr[mid] == key){
            return mid;
        }
        // right wala part
        else if(key>arr[mid]){
            start = mid + 1;
        }
        // left wala part
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return -1;
}

int main()
{
    int arr[6] = {10,13,30,45,66,98};
    int key = 100;
    int index = binarySearch(arr,6,key);
    cout << "index of: " << key << " is: " << index << endl;
    return 0;
}