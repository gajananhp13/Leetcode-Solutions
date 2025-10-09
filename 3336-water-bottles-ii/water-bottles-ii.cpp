class Solution {
public:
    int maxBottlesDrunk(int b, int e) {
        int d = b; // total bottles drunk
        int emp = b; // empty bottles

        while (emp >= e) {
            emp -= e;
            e++;
            d++;
            emp++;
        }
        return d;
    }
};
