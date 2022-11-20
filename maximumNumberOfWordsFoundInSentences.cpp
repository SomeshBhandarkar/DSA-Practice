#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int mostWords(vector<string>& sen){
    int n = sen.size();
    int cnt = 0;

    for(int i=0; i<n ;i++){
        int ans = count(sen[i].begin(),sen[i].end(),' ');
        cout << ans << endl;
        if(ans > cnt){cnt = ans;}
    }
    return cnt + 1;
}

int main()
{
    vector<string> sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    mostWords(sentences);
    return 0;
}