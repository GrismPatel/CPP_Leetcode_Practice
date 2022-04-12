#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int maximumWealth(vector<vector<int>> &accounts) {
    int max_wealth = 0;
    const int accounts_size = accounts.size();
    for (int index =0; index < accounts_size; index ++) {
        vector<int> account = accounts[index];
        int sum_of_accounts = accumulate(account.begin(), account.end(), 0);
        if (max_wealth <sum_of_accounts) {
            max_wealth = sum_of_accounts;
        }
    }
    return max_wealth;
}

int main() {
    vector<vector<int>> accounts = {
        {2,8,7},
        {7,1,3},
        {1,9,5}
    };
    
    const int max_wealth = maximumWealth(accounts);
    return 0;
}