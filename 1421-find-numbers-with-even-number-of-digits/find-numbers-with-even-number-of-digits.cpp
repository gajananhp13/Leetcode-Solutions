class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (to_string(nums[i]).size() % 2 == 0)
                res++;
        }
        return res;
    }
};