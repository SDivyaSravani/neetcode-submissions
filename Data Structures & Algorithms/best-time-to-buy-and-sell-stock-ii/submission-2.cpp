class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int n = prices.size();
         int mini = prices[0];
         int maxi = prices[0];
         int sum = 0;
         for(int i=1;i<n;i++){
            if(prices[i]<prices[i-1]){
                sum = sum + (maxi-mini);
                mini = prices[i];
                maxi = prices[i];
            }else if(prices[i]>prices[i-1]){
                maxi = prices[i];
            }
            if(i==n-1){
                sum = sum + prices[n-1]-mini;
            }
         }
         return sum;
    }
};