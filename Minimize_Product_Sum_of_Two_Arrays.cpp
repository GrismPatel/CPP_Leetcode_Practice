#include <iostream>
#include <vector>

using namespace std;

int minProductSum(vector<int>& nums1, vector<int>& nums2) {
    int ans = 0;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end(), greater<int>());

    for (int index =0; index <nums1.size(); index++) {
        ans += (nums1[index] * nums2[index]);
    }

    return ans;
}

int main() {
    vector<int> nums1 = {5,3,4,2};
    vector<int> nums2 = {4,2,2,5};

    const int ans = minProductSum(nums1, nums2);
    cout << ans << endl;
    return 0;
}