#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int printSum(int arr[][3], int row, int col){
    int maxi = INT32_MIN;
    int rowindex = -1;
    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int col = 0; col < 3; col++){
            sum += arr[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            rowindex = row;
        }
    }
    cout << "the maximum sum is: " << maxi << endl;
    return rowindex;
}
int main()
{
    int arr[3][3];
    cout << "Enter the array elements: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "array elements are: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    printSum(arr,3,3);
    return 0;
}