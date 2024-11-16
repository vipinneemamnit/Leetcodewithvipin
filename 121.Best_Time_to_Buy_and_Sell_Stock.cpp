class Solution {
public:
    int maxProfit(vector<int>& prices) {
        Two pointer
         if(prices.empty()||prices.size()<2)
            return 0;
        int maxprofit = 0;
        int leftBuy = 0;
        int rightSell = 1;

    while(rightSell< prices.size()){
        int currentPrice = prices[rightSell];
        int buyPrice = prices[leftBuy];
        
        if(buyPrice < currentPrice){
            int currentProfit = currentPrice - buyPrice;
            maxprofit = max(currentProfit, maxprofit);
        }else{
            leftBuy = rightSell;
        }
        rightSell++;
    }
    return maxprofit;

    //DP solution
int maxProfitDP(vector<int>& prices){
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int currentPrice : prices){
            minPrice = min(currentPrice, minPrice);
            maxProfit = max(maxProfit, currentPrice - minPrice);
        }
        return maxProfit;
    }
};
