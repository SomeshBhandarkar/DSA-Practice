#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
            // for(auto it:m){
            //     cout << it.first << " " << it.second << endl;
            // }
            for(auto i:m){
                if(i.second > nums.size()/2){
                    return i.second;
                }
            }
        }
        return -1;
    }

int main()
{
    vector<int> nums = {3,2,3};
    int ans = majorityElement(nums);
    cout << ans << endl;
    return 0;
}