class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int l=0,r=n-1;
        
        while(l<=r){
            int mid=l+(r-l)/2;
            
            // A[mid]-(mid+1) --> This gives umber of missing number before m'th index
            if(arr[mid]-(mid+1)<k){
                l=mid+1;
            } else{
                r=mid-1;
            }   
        }
        return l+k;
    }
};