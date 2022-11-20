#include<iostream>
#include<vector>
using namespace std;

int getFirstOccurence(int arr[], int n, int key){

    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start + (end-start)/2;

    while(start<=end){
        
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;

        }

        else if(key>arr[mid]){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}

int getSecondOccurence(int arr[], int n, int key){

    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start + (end-start)/2;

    while(start<=end){
        
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}

int main()
{
    int arr[6] = {1,2,3,3,5,6};
    int key = 3;
    int index1 = getFirstOccurence(arr,6,key);
    int index2 = getSecondOccurence(arr,6,key);
    cout << key << "'s" << " first occurence is: " << index1 << " and second occurence is: " << index2 << endl;
    return 0;
}