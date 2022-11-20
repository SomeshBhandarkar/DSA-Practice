#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool check(vector<int>& nums, int n){
    int countPair = 0;
    for(int i=0; i<n; i++){
        if(nums[i-1] > nums[i]){
            countPair++;
        }
    }
    if(nums[n-1] > nums[0]){
        countPair++;
    }
    return countPair <=1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums = {3,4,5,1,2};
    int result = check(nums,n);
    cout << result << endl;
    return 0;
}