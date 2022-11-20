// leetcode question --> 724. Find Pivot Index
#include<iostream>
using namespace std;

int findPivotIndex(int arr[], int n){
    int sum=0, leftSum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    for(int i=0;i<n;i++){
        if(leftSum==sum-leftSum-arr[i]){
            return i;
        }
        leftSum+=arr[i];
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[10];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }cout << endl;

    int pivot = findPivotIndex(arr,n);
    cout << "pivot index is: " << pivot << endl;
    return 0;
}