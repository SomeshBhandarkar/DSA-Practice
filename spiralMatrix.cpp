#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;
        int totalElement = row * col;
        
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;
        
        
        while(count < totalElement){
            // printing starting row
            for(int index = startingCol;count < totalElement && index <= endingCol; index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }    
            startingRow++;
            
            // printing ending col
            for(int index = startingRow;count < totalElement &&  index <= endingRow; index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            
            // ending row -->
            for(int index = endingCol;count < totalElement &&  index >= startingCol; index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            // starting col -->
            for(int index = endingRow;count < totalElement &&  index >= startingRow; index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }

int main()
{
    return 0;
}