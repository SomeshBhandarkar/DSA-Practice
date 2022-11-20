#include <bits/stdc++.h>
using namespace std;
bool isSafe(int i,int j){
    return i>=0 && j>=0 && i<3 && j<3;

}
pair<int,int>getBlank(vector<vector<int>>&input){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;++j){
            if(input[i][j]==0){
                return {i,j};
            }
        }
    }
}
void print(vector<vector<int>>&input){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;++j){
            cout<<input[i][j]<<" ";
        }
        cout<<endl;
    }
}
void solve(vector<vector<int>>&input,vector<vector<int>>&output,int i,int j,vector<int>&iterations,int depth,vector<vector<int>>&visited){
        if(input==output){
            iterations.push_back(depth);
            return;
        }
        visited[i][j]=1;
        int alongi[]={-1,-1,0,0};
        int alongj[]={0,0,-1,-1};
        depth++;
        for(int k=0;k<4;k++){
            int new_i=i+alongi[k];
            int new_j=j+alongj[k];
            if(isSafe(new_i,new_j)&&!visited[new_i][new_j]){
                swap(input[i][j],input[new_i][new_j]);
               print(input);
                solve(input,output,new_i,new_j,iterations,depth,visited);
                swap(input[i][j],input[new_i][new_j]);
            }
        }
        visited[i][j]=0;
}


int main(){
    vector<vector<int>> inputjoaahe={{1,2,3},{8,4,0},{7,6,5}};
    vector<vector<int>> outputjopahije={{1,2,3},{8,0,4},{7,6,5}};
    /*for(int i=0;i<3;++i){
        vector<int> tmp;
        for(int j=0;j<3;++j){
            int tmp1;
            cout<<"Enter Your Input here  ";
            cin>>tmp1;
            tmp.push_back(tmp1);
        }
        inputjoaahe.push_back(tmp);
    }
    for(int i=0;i<3;++i){
        vector<int> temp;
        for(int j=0;j<3;++j){
            int temp1;
            cout<<"Enter Your required output  here  ";
            cin>>temp1;
            temp.push_back(temp1);
        }
        outputjopahije.push_back(temp);
    }*/

    vector<vector<int>> visited={{0,0,0},
    {0,0,0},
    {0,0,0}
    };
    pair<int,int> blankPositions=getBlank(inputjoaahe);
    vector<int>iterations;
     solve(inputjoaahe,outputjopahije,blankPositions.first,blankPositions.second,iterations,0,visited);
    // cout<<iterations.size()<<endl;
    return 0;

}