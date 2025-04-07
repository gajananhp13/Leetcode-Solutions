class Solution {
public:
    int myAtoi(string s) {
        stringstream ss(s);
        int n;
        ss >>n;
        return n;
    }
};