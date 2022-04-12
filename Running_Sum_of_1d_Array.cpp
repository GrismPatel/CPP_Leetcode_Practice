#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int>& nums) {
    const int array_size = nums.size();
    vector<int> ans(array_size);
    ans[0] = nums[0];
    for (int index = 1; index <array_size; index ++) {
        ans[index] = nums[index] +ans[index -1];
    }
    return ans;
}

int main() {
    vector<int> nums = {1,2,3,4};
    vector<int> ans = runningSum(nums);
    
    // ranged loop
    for (const int& i : ans) {
        cout << i << "  ";
    }
    return 0;
}