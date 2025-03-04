class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size()/2;
        set<int> a(begin(candyType),end(candyType));
        int ans=a.size();
        int ans1=min(n,ans);
        return ans1;
    }
};