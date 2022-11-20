#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

char getMaxOccCharacter(string s){
    // this array is to store the counts of each character nothing much 
   int arr[26] = {0};
   int count = 0;
   for(int i = 0; i<s.length(); i++){
        /// this if means --> if it is lowercase characters then,
        if(s[i] >= 'a' && s[i] <= 'z'){
            count = s[i] - 'a';
        }
        else{
            count = s[i] - 'A';
        }
        arr[count]++;
   } 

   // now get the max count for each character
   int maxi = -1, ans = -1;
   for(int i=0; i<26; i++){
    if(maxi < arr[i]){
        ans = i;
        maxi = arr[i];
    }
   }
    // after getting the max count we again need to convert the count to the character to get the answer 
   char finalAns = 'a' + ans;
   return finalAns;
}

int main()
{
    string s;
    cin >> s;
    cout << getMaxOccCharacter(s) << endl;
    return 0;
}