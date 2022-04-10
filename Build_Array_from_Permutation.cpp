#include <iostream>
#include <vector>

using namespace std;

vector<int> buildArray(vector<int> &nums) {
    const int array_size = nums.size();
    vector<int> ans(array_size);
    for (int index =0; index <array_size; index++) {
        ans[index] = nums[nums[index]];
    }
    return ans;    
}

int main() {
    vector<int> vector1 = {0,2,1,5,3,4};

    vector<int> ans = buildArray(vector1);

    // ranged loop
    for (const int& i : ans) {
        cout << i << "  ";
    }

    return 0;
}