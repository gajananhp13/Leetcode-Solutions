class Solution {
public:
char findTheDifference(string s, string t) {
        int n = s.length(), res = t[n];
        for(int i = 0; i < n; ++i){
            res -= s[i];
            res += t[i];
        }
        return char(res);
    }
};