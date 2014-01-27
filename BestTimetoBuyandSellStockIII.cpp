//============================================================================
// Best Time to Buy and Sell Stock
//
// Say you have an array for which the ith element is the price of a given
// stock on day i.
//
// Design an algorithm to find the maximum profit. You may complete at most
// two transactions.
//
// Note:
// You may not engage in multiple transactions at the same time (ie, you must
// sell the stock before you buy again).
//
// Complexity:
// O(n)
//============================================================================

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if (prices.size()<2) return 0;
        vector<int> l(prices.size(), 0);
        vector<int> r(prices.size(), 0);
        int s=prices[0];
        for(int i=1;i<prices.size();i++) {
            if (prices[i]-s>l[i-1]) l[i]=prices[i]-s;
            else l[i]=l[i-1];
            s=s<prices[i]?s:prices[i];
        }
        s=prices[prices.size()-1];
        for(int i=prices.size()-2;i>=0;i--) {
            if (s-prices[i]>r[i+1]) r[i]=s-prices[i];
            else r[i]=r[i+1];
            s=s>prices[i]?s:prices[i];
        }
        int res=0;
        for(int i=0;i<prices.size();i++) {
            if(l[i]+r[i]>res) res=l[i]+r[i];
        }
        return res;
    }
};