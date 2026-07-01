class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        bool dup = false;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                dup = true;
                break;
            }
        }
        return dup;
    }
};