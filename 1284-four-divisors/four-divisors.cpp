class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int total = 0;
        for(int i = 0, n = nums.size(); i < n; ++i){
            int num = nums[i], count = 0, sum = 0;
            for(int i = 1; i * i <= num; ++i){
                if(num % i == 0){
                    int j = num / i;
                    ++count;
                    sum += i;
                    if(i != j){
                        ++count;
                        sum += j;
                    }
                    if(count > 4) break;
                }
            }
            if(count == 4) total += sum;
        }
        return total;
    }
};