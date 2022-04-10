#include <iostream>
#include <vector>

using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    const int array_size = nums.size();
    const int final_array_size = array_size *2;
    vector<int> ans(final_array_size);

    for (int index =0; index <array_size; index ++) {
        ans[index] = nums[index];
        ans[index +array_size] = nums[index];
    }

    return ans;
}

int main() {
    vector<int> vector1 = {1,2,1};
    vector<int> ans = getConcatenation(vector1);

    // ranged loop
    for (const int& i : ans) {
        cout << i << "  ";
    }
}