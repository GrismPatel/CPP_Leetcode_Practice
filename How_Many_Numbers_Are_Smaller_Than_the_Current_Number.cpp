#include <iostream>
#include <vector>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> count(102);
    const int numsSize = nums.size();
    vector<int> smallerSize(numsSize);
    for (int index =0; index < numsSize; index++) {
        count[nums[index] +1] += 1;
    }

    for (int index =1; index < 102; index++) {
        count[index] += count[index -1];
    }
    for (const int &i: count) {
        cout << "bool: " << i << endl;
    }

    for (int index =0; index < numsSize; index++) {
        smallerSize[index] = count[nums[index]];
    }
    return smallerSize;
}

int main() {
    vector<int> nums = {8,1,2,2,3};
    vector<int> smallerNums = smallerNumbersThanCurrent(nums);
    return 0;
}