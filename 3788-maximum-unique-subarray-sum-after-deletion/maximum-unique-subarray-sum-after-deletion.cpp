class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> s;
        int maxneg=INT_MIN;
        int sum=0;
        for (int &num : nums)
        {
            if(num<=0)
            {maxneg=max(num,maxneg);}

        else if(!s.count(num))
        sum+=num;
        s.insert(num);

        }
        return sum == 0 ? maxneg :sum;
    }
};