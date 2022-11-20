#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;
    for(int col=0; col<mCols; col++){
        
        //for odd cases we will go from bottom to top row wise 
        if(col&1){
            for(int row = nRows-1; row >= 0; row--){
//                 cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
        else{
            // this else is for even number in which we'll go from bottom to top
            for(int row=0; row<nRows; row++){
//                 cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main()
{
    return 0;
}