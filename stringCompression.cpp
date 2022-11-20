#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int compress(vector<char>& chars) {
        int i=0;
        int ansIndex = 0; // to store the valid character count 
        int n = chars.size();
        while(i<n){
            int j = i+1;
            while(j<n && chars[i] == chars[j]){
                j++;
            }
            
            // we will come out of this loop on two conditions 
            // 1. either the vector has been completely traversed or,
            // 2. you have encountered a new character so, store that and then go to the new one 
            
            // storing the old character to move on to next character, 
            chars[ansIndex++] = chars[i];
            
            int count = j-i;
            
            // condition is if count is greater than 1 then store otherwise store only character
            if(count > 1){
                // converting integer to charater that we need 
                string cnt = to_string(count);
                for(char ch: cnt){
                    chars[ansIndex++] = ch;
                }
            }
         i = j;   
        }
        return ansIndex;
    }
int main()
{
    return 0;
}