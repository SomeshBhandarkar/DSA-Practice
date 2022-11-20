#include<iostream>
#include<algorithm>

using namespace std;

void sort012(int arr[], int n){

    // here we are using 3pointer approach, also called as dutch national flag algorithm
    // we will have three pointers and the main will be the mid pointer which will do the work of comparing 
    // check notebook for reference
    int low = 0; // both low and mid will begin from zero 
    int mid = 0;
    int high = n-1;

    while(mid <= high) // here till mid crosses or is equal to the high it'll traverse 
    {   

        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    cout << "printing the array: " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;

}

int main()
{
    int n;
    cin >> n;
    int arr[20];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }cout << endl;

    sort012(arr, n);

    return 0;
}