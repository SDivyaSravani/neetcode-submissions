class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int maxLen = 1;
        int cnt = 1;
        if(n==0) return n;
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]-1){
                cnt++;
                maxLen = max(maxLen,cnt);
            }else if(nums[i-1]==nums[i]){
                continue;
            }
            else{
                cnt = 1;
            }
        }
        return maxLen;
    }
};
