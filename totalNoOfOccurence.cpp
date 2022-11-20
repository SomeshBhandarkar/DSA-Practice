#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key){

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key>arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int secondOccurence(int arr[], int n, int key){

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key>arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[7] = {1,2,3,3,3,5,5};
    int key = 3;
    int first = firstOccurence(arr,7,5);
    int second = secondOccurence(arr,7,5);

    int count = (second - first) + 1;
    cout << first <<  " " << second << endl;

    cout << "the total number of occurences are: " << count << endl;
    return 0;
}