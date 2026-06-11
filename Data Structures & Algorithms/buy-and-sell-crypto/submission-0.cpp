class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, minIdx = 0;
        for(int i = 1; i < prices.size(); i++){
        if(prices[i] < prices[minIdx]){
            minIdx = i;
        }else if(prices[i] - prices[minIdx] > maxProfit){
            maxProfit = prices[i] - prices[minIdx];
        }
        }
        return maxProfit;
    }
};
