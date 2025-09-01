class Solution {
public:
    string finalString(string s) {
        string ans = "";
        for(auto x : s){
            if(x == 'i')
            reverse(ans.begin(),ans.end());
            else
            ans += x;
        }
        return ans;
    }
};