class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n=cost.size();
        int i=0;
        while(i<n-1){
            if(cost[i]<=cost[i+1]){
                cost[i+1]=cost[i];
            }
            i++;
        }
        return cost;
    }
};