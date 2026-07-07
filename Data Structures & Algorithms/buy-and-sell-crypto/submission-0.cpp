class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int profit = 0;
        for(auto price:prices){
            if(price<mini){
                mini = price;
            }else if((price-mini)>profit){
                profit = price-mini;
            }
        }
        return profit;
    }
};
