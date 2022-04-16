#include <iostream>
#include <vector>

using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> ans;
    for (int index =0; index <n; index++) {
        ans.push_back(nums[index]);
        ans.push_back(nums[index +n]);
    }
    return ans;       
}

int main () {
    vector<int> nums = {2,5,1,3,4,7};
    const int n = 3;

    vector<int> ans = shuffle(nums, n);
    for (const int i: ans) {
        cout << i << endl;
    }

    return 0;
}