class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=INT_MIN;
        int n=piles.size();
       
        for(int i=0; i<n; i++){
            if(piles[i]>maxi){
                maxi=piles[i];
            }
        }
        int left=1,right=maxi;
        while(left<=right){ 
            int mid=left+(right-left)/2;
            long long sum=0;
            for(int i=0; i<n; i++){
                if(mid==0){
                    return 0;
                }
                if(piles[i]%mid==0){
                    sum+=piles[i]/mid;
                }
                else{
                     sum+=(piles[i]/mid)+1;
                }
            
            }
           
            if(sum<=h){ 
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
      return left;

    }
};