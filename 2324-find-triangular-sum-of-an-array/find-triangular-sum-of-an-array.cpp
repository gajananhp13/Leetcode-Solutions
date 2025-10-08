class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int size = nums.size();
        for(int i=size-1; i>0; i--) {
            for(int j=0; j<i; j++) {
                nums[j] += nums[j+1];
                nums[j] %= 10;
       }
      }
        return nums[0];
    }
};