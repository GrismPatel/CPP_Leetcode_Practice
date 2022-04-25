#include <iostream>
#include <vector>

using namespace std;

// recursive
int binarySearch(vector<int> &nums, int low, int high, int target) {
    if (low > high) {
        return -1;
    }

    int mid = (low +high) / 2;
    if (nums[mid] == target) {
        return mid;
    } else if (nums[mid] > target) {
        high = mid -1;
    } else if (nums[mid] < target) {
        low = mid +1;
    }
    return binarySearch(nums, low, high, target);
}

// iterative
int search(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() -1;

    while ( low <= high ) {
        int mid = (low +high) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            high = mid -1;
        } else if (nums[mid] < target) {
            low = mid +1;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = { -1,0,3,5,9,12 };
    int target = 9;
    int index = search(nums, target);
    cout << index << '\n';
    return 0;
}