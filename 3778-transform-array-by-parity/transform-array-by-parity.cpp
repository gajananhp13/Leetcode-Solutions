class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n=nums.size();
        int even=0,odd=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            nums[i]=even;
            else
            nums[i]=odd;

        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};