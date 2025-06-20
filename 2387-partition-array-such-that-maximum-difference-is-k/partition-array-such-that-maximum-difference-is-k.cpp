class Solution {
public:
    int partitionArray(vector<int>& power, int k) {
        sort(begin(power), end(power));
        int range=-1;
        int section=0;

        for(int i=0;i<power.size();i++){
            if(power[i] > range){
                section++;
                range = power[i]+k;
            }
        }

        return section;
    }
};