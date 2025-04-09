class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> s;
        for (int i = nums.size() - 1; i >= 0; --i) {
            if (s.find(nums[i]) != s.end()) {
                return i / 3 + 1;
            }
            s.insert(nums[i]);
        }
        return 0;
    }
};