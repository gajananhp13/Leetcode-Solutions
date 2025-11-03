class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int total = prices[0] + prices[1]; 
        if (total > money)
            return money;
        else 
            return money - total;
        
    }
};