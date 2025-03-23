class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
         int cells = n*n;
        
        int avail = maxWeight / w;

        if(avail < cells){
            return avail;
        }
        return cells;
    }
};