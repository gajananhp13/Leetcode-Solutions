class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     
        int start = -1, end = -1;

        int left = 0, right = nums.size() - 1;
        //  Find the START leftmost
        while (left <= right) {
            int mid = left + (right - left) / 2; // Avoid overflow
            if (nums[mid] >= target) {
                // Target could be at mid or to the left
                right = mid - 1;
                if (nums[mid] == target) {
                    start = mid; // Record this as potential start
                }
            } else {
                // Target must be to the right
                left = mid + 1;
            }
        }

        // Reset pointers for  END
        left = 0;
        right = nums.size() - 1;
        //  Find the rightmost) index
     while (left <= right) {
            int mid = left + (right - left) / 2; // Avoid overflow
            if (nums[mid] <= target) {
                // Target could be at mid or to the right
                left = mid + 1;
                if (nums[mid] == target) {
                    end = mid; // Record this as potential end
                }
            } else {
                // Target must be to the left
                right = mid - 1;
            }
        }

        // Return the range (start and end positions)
        return {start, end};
    }
};