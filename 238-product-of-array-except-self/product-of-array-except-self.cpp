
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix( n,1);
        vector<int> suffix(n, 1);
        vector<int> ans(n);  
        //let arr product calculate
        for (int i=1;i<n;i++) {
            prefix[i]=prefix[i - 1] * nums[i - 1];
        }
        // right arr product calculate
        for (int i=n-2;i>=0;i--) {
            suffix[i]=suffix[i+1]*nums[i+1];
        }

        //multiply into returning arr
        for (int i=0;i<n;i++) {
            ans[i] = prefix[i] * suffix[i];
        }
        return ans;
    }
};