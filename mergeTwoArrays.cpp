#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int> arr1, int m, vector<int> arr2, int n){
    vector<int> temp;
    int i=0, j=0;

    while(i < m && j < n){
        if(arr1[i] < arr2[j]){
            temp.push_back(arr1[i++]);
        }
        else{
            temp.push_back(arr2[j++]);
        }
    }
    while(i < m){
        temp.push_back(arr1[i++]);
    }
    while(j < n){
        temp.push_back(arr2[j++]);
    }
    arr1 = temp;
    for(int i=0; i<arr1.size();i++){
        cout << arr1[i] << " ";
    }cout << endl;
}

int main()
{
    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {2,5,6};
    int m = 3;
    int n = 3;
    merge(arr1,m,arr2,n);
    return 0;
}