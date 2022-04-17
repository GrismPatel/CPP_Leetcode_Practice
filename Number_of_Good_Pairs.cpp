#include <iostream>
#include <vector>
#include <map>

using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    map< int, vector<int> > frequency;
    const int num_size = nums.size();
    for (int index =0; index < num_size; index ++) {
        if (frequency.find(nums[index]) != frequency.end()) {
            frequency[nums[index]].push_back(index);
        } else {
            frequency[nums[index]] = {index};
        }
    }

    int ways = 0;
    map< int, vector<int> >::iterator it;
    for (it = frequency.begin(); it != frequency.end(); it++) {
        int value_size = it->second.size();
        if (value_size >= 2) {
            ways += value_size * (value_size -1)/2.0;
        }
    }
    return ways;
}

int main () {
    vector<int> nums = { 1,1,1,1 };
    int ans = numIdenticalPairs(nums);
    cout << ans << endl;
    return 0;
}