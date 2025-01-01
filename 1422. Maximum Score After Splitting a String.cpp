class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        int onecount=0;
        // this loop for ones count 
        for(int i=0;i<n;++i){

            if(s[i]=='1') onecount++;
        }
int maxsum=0;
    int zerocount=0;
        // loop for making the left side zero count
        for(int i=0;i<n-1;++i){
                if(s[i]=='1') 
                onecount--;
                else 
              {  zerocount++;}

                maxsum=max(maxsum,onecount+zerocount);
        }
return maxsum;
    }
};
