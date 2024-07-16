// leetcode problem number 122

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int mini = INT_MAX;

        for(int i = 0 ; i<prices.size() ; i++){
            mini = min(mini,prices[i]);
            if(prices[i]>mini){
                profit += (prices[i]-mini);
                mini = prices[i];
            }
        }
        return profit;
    }
};