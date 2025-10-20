class Solution {
public:
    string largestGoodInteger(string num) {
        char maxv = '\0';  // smallest possible char
        for (int i = 0; i <= num.size() - 3; i++) {
            if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                maxv = max(maxv, num[i]);
            }
        }
        return maxv == '\0' ? "" : string(3, maxv);
    }
};
