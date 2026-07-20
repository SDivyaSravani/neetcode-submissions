class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxC = 0;
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cnt++;
                maxC = max(maxC,cnt);
            }else{
                cnt = 0;
            }
        }
        return maxC;
    }
};