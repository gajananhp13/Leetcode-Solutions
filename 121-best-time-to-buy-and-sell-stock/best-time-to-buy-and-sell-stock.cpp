class Solution {
public:
// intiate var miprice(+ve infinty)
// intialize max profit ,can keep it as zero



// greedy algo

// what will do: itereate over the number of stock 
// price and keep track min price , encountered so far also 
// considering other possiblilties for the max profit we can get
   
   //2 find max preice 
        // 2 update min price---> calculate curnt proft as the diff btn CP and MinP

        // max profit =current price -min price
    // return the max profit 
   
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int maxprofit = 0;

        for( int i=0;i<prices.size();i++)
        {
            // updating min price
            if(prices[i]<minprice)
            minprice=prices[i];
            else if(prices[i] - minprice > maxprofit )
            maxprofit = prices [i] - minprice;
        
        }

    return maxprofit;

    }
};