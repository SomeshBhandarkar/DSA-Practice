#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> findTriplets(vector<int> &arr, int n, int K){
    vector<vector<int>> ans;
    int front,end;
    sort(arr.begin(),arr.end());

    for(int i=0; i<n; i++){
        front = i+1;
        end = n-1;
        while(front<end){
            
            if(arr[i]+arr[front]+arr[end]==K){
                ans.push_back({arr[i],arr[front],arr[end]});
                int x = arr[front];
                int y = arr[end];

                
            }
        }
    }

}


int main()
{
    return 0;
}