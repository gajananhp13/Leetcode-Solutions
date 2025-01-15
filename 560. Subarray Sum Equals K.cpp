class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        unordered_map<int, int> prefix;
        prefix[0] = 1;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            count += prefix[sum - k];
            prefix[sum]++;
        }
        return count;
    }
};
