class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long  n=nums.size();
        long left=0,right=0;   // windows {l,r} and right is not included
        long sum=0;  
        long count=0;// sum of scores of nums
        while(left<n)
        {
            // largest window finding
            while( right<n && (sum+nums[right])*(right-left+1) < k)
        
                     sum+=nums[right++];
                count+=right - left;   // all subarrays start from left and checking till second last right valids
            if(left==right)  // if the number could fit or else more than k itself move both pointers past it 
                right++;
                else sum-=nums[left];
                left++;

        }
return count;
    }
};