class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int res = INT_MAX;
        int j = 0;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
            while(sum>=target){
                res = min(res,i-j+1);
                sum = sum - nums[j];
                j++;
            }
        }
        return (res==INT_MAX)?0:res;
    }
};