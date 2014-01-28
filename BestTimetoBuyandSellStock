//============================================================================
// Best Time to Buy and Sell Stock
//
// Say you have an array for which the ith element is the price of a given
// stock on day i.
//
// If you were only permitted to complete at most one transaction (ie, buy
// one and sell one share of the stock), design an algorithm to find the
// maximum profit.
//
// Complexity:
// O(n)
//============================================================================

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int res=0;
        if(prices.size()<2) return res;
        int min=prices[0];
        for(int i=1;i<prices.size();i++) {
            if(prices[i]-min>res) res=prices[i]-min;
            if(prices[i]<min) min=prices[i];
        }
        return res;
    }
};