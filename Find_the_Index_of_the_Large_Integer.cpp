/**
 * // This is the ArrayReader's API interface.
 * // You should not implement it, or speculate about its implementation
 * class ArrayReader {
 *   public:
 *     // Compares the sum of arr[l..r] with the sum of arr[x..y] 
 *     // return 1 if sum(arr[l..r]) > sum(arr[x..y])
 *     // return 0 if sum(arr[l..r]) == sum(arr[x..y])
 *     // return -1 if sum(arr[l..r]) < sum(arr[x..y])
 *     int compareSub(int l, int r, int x, int y);
 *
 *     // Returns the length of the array
 *     int length();
 * };
 */

class Solution {
public:
    int getIndex(ArrayReader &reader) {
        int low = 0;
        int high = reader.length() -1;
        
        while (low < high) {
            int mid = (low +high) / 2;
            int lower_mid = mid;
            if ((high -low +1) %2 != 0) {
                lower_mid -= 1;
            }
            int result = reader.compareSub(low, lower_mid, mid +1, high);
            if (result == 0) {
                return mid;
            } else if (result == 1) {
                high = mid;
            } else {
                low = mid +1;
            }
        }
        return low;
    }
};