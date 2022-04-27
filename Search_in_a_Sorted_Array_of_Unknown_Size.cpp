/**
 * // This is the ArrayReader's API interface.
 * // You should not implement it, or speculate about its implementation
 * class ArrayReader {
 *   public:
 *     int get(int index);
 * };
 */

class Solution {
public:
    int search(const ArrayReader& reader, int target) {
        int low = 0;
        int high = target - reader.get(0);
        while (high >= low) {
            int mid = (low + high)/2;
            if (reader.get(mid) == target) {
                return mid;
            } else if (reader.get(mid) > target) {
                high = mid -1;
            } else if (reader.get(mid) < target) {
                low = mid +1;
            }
        }
        return -1;
    }
};