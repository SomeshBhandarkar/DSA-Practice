#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        // n -> number of bags and k-->no of minutes
        int n, k;
        cin >> n >> k;
        multiset<long long> bags;
        for(int i=0; i<n; ++i){
            long long candy_cnt;
            cin >> candy_cnt;
            bags.insert(candy_cnt);
        }
        long long total_candies = 0;
        for(int i=0; i<k; ++i){
            auto last_it = (--bags.end());
            // or can also do 
            // last_it--; but this and --bags.end() is the same thing!
            int candy_cnt = *last_it;
            total_candies += candy_cnt;
            bags.erase(last_it);
            bags.insert(candy_cnt/2);
        }
        cout << total_candies << endl;
    }
    return 0;
}