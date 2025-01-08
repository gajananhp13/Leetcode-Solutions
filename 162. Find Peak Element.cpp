class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     int n =nums.size();
     int l=0;
     int r=n-1;
     int mid;
     while(r>l){

            mid =(l+r)/2;
            if(nums[mid+1]>nums[mid]){
                l=mid+1;
            }
            else{
                r=mid;
            }

     }   
     return l;
    }
};
